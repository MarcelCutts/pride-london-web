let component = ReasonReact.statelessComponent("Splash");

module Styles = {
  open Css;
  let splash =
    style([
      border(px(5), solid, hex("000")),
      padding(px(20)),
      textAlign(center),
    ]);
};

let make = _children => {
  ...component,
  render: _self =>
    <div className=Styles.splash>
      <h1> ("London Pride!" |> ReasonReact.string) </h1>
      <h3> ("Coming soon..." |> ReasonReact.string) </h3>
    </div>,
};
