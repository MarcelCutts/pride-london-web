let component = ReasonReact.statelessComponent("Title");

module Styles = {
  open Css;
  let title = style([
      border(px(5), solid, hex("000")),
      padding(px(20)),
      textAlign(center),
  ])
};

let make = (~title, ~subtitle, _children) => {
  ...component,
  render: _self =>
    <div className=Styles.title>
      <h1> (title |> ReasonReact.stringToElement) </h1>
      <h3> (subtitle |> ReasonReact.stringToElement) </h3>
    </div>,
};