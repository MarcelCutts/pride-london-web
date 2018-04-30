let component = ReasonReact.statelessComponent("Title");

module Styles = {
  open Css;
  let container = style([
      backgroundColor(hex("AAA")),
      padding4(~top=px(100), ~right=px(0), ~bottom=px(40), ~left=px(20)),
      media("only screen and (min-width: 768px)", [
            padding3(~top=px(100), ~h=px(40), ~bottom=px(20)),
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