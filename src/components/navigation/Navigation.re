module Styles = {
  open Css;
  let navigation = style([display(flexBox), height(px(50))]);
  let navigationLink = style([padding(px(10)), textDecoration(underline)]);
};

let component = ReasonReact.statelessComponent("Navigation");

let make = (~updatePath, _children) => {
  ...component,
  render: _self =>
    <div className=Styles.navigation>
      <div className=Styles.navigationLink onClick=(_e => updatePath(["home"]))>
        ("Home" |> ReasonReact.stringToElement)
      </div>
      <div className=Styles.navigationLink onClick=(_e => updatePath(["events"]))>
        ("Events" |> ReasonReact.stringToElement)
      </div>
    </div>,
};