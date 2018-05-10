let component = ReasonReact.statelessComponent("Banner");

module Styles = {
    open Css;
    let banner = style([
        backgroundColor(hex("FFD95E"))
    ]);

    let title = style([
        backgroundColor(hex("FFF"))
    ]);

    let subtitle = style([
        backgroundColor(hex("2D2F7F"))
    ]);
};

let make = (~title, ~subtitle, _children) => {
    ...component,
    render: _self =>
        <div className=Styles.banner>
          <h1 className=Styles.title> (title |> ReasonReact.stringToElement) </h1>
          <h3 className=Styles.subtitle> (subtitle |> ReasonReact.stringToElement) </h3>
        </div>,
};

/*
things to do for this branch

similar to the title component
will need to add additional styling
what is the font, what is the colour?
read up on ReasonReact

can i get the background image asset
is there a separate one for mobile?

establish a place to put the assets
*/