module Styles = {
  open Css;
  open! Calc;
  let master =
    style([height(vh(100.0)), display(flexBox), flexDirection(column)]);
  let pageContainer = style([height(vh(100.0) - px(50))]);
};

type action =
  | UpdatePath(list(string));

type state = {path: list(string)};

let lookupPageFromPath = path =>
  switch (path) {
  | ["home"] => <Home />
  | ["events"] => <Events />
  | _ => <Home />
  };

let generateUrlPathString = path =>
  List.fold_left((a, b) => a ++ b ++ "/", "", path);

let component = ReasonReact.reducerComponent("Master");

let make = _children => {
  ...component,
  initialState: () => (
    {path: ReasonReact.Router.dangerouslyGetInitialUrl().path}: state
  ),
  subscriptions: self => [
    Sub(
      () =>
        ReasonReact.Router.watchUrl(url => self.send(UpdatePath(url.path))),
      ReasonReact.Router.unwatchUrl,
    ),
  ],
  reducer: (action, state) =>
    switch (action) {
    | UpdatePath(p) =>
      ReasonReact.UpdateWithSideEffects(
        {path: p},
        (
          _self =>
            if (p != state.path) {
              ReasonReact.Router.push("/" ++ generateUrlPathString(p));
            }
        ),
      )
    },
  render: self =>
    <div className=Styles.master>
      <Navigation updatePath=(path => self.send(UpdatePath(path))) />
      <div className=Styles.pageContainer>
        (lookupPageFromPath(self.state.path))
      </div>
    </div>,
};
