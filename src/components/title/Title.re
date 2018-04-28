let component = ReasonReact.statelessComponent("Title");

module Styles = {
  open Css;
  let container = style([
      backgroundColor(hex("AAA")),
      fontFamily("Roboto, Helvetica, sans-serif"),
      padding4(px(100), px(0), px(40), px(20)),
      media("only screen and (min-width: 768px)", [
            padding3(px(100), px(40), px(20)),
          ]),
  ]);

  let title = style([
      fontWeight(700),
      textAlign(`left),
  ]);

  let subtitle = style([
      fontWeight(300)
  ])
};

let make = (~title, ~subtitle, _children) => {
  ...component,
  render: _self =>
    <div className=Styles.container>
      <h1 className=Styles.title> (title |> ReasonReact.stringToElement) </h1>
      <h3 className=Styles.subtitle> (subtitle |> ReasonReact.stringToElement) </h3>
    </div>,
};