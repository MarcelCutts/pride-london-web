let component = ReasonReact.statelessComponent("Events");

let make = _children => {
    ...component,
    render: _self => <div> ("events page" |> ReasonReact.stringToElement) </div>
};

