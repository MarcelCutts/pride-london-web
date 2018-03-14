let component = ReasonReact.statelessComponent("Goodbye");

let make = (~name, _children) => {
    ...component,
    render: _self => <div> ("Goodbye " ++ name |> ReasonReact.stringToElement) </div>
};