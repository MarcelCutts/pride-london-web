let component = ReasonReact.statelessComponent("Goodbye");

let make = _children => {
    ...component,
    render: _self => <div> ("Goodbye" |> ReasonReact.stringToElement) </div>
};