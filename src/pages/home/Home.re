let component = ReasonReact.statelessComponent("Page");

module Styles = {
  open Css;
  let page =
    style([
      height(pct(100.0)),
      display(flexBox),
      justifyContent(center),
      alignItems(center),
      flexDirection(column),
    ]);
  let text = style([color(red), display(flexBox)]);
};

let make = _children => {
  ...component,
  render: _self => <div className=Styles.page> <Splash /> </div>,
};