let component = ReasonReact.statelessComponent("Title");

module Styles = {
  open Css;
  open Colors;
  open Typography;

  let container = style ([
      backgroundColor(`hex(Colors.mediumGrey)),
      padding4(~top=px(100), ~right=px(0), ~bottom=px(40), ~left=px(20)),
      media("only screen and (min-width: 768px)", [
            padding3(~top=px(100), ~h=px(40), ~bottom=px(20)),
          ]),
  ]);

  let title = Typography.hero;

  let subtitle = Typography.body;
};

let make = (~title, ~subtitle, _children) => {
  ...component,
  render: _self =>
    <div className=Styles.container>
      <h1 className=Styles.title> (title |> ReasonReact.stringToElement) </h1>
      <h3 className=Styles.subtitle> (subtitle |> ReasonReact.stringToElement) </h3>
    </div>,
};