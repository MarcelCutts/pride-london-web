let component = ReasonReact.statelessComponent("Help");

let make = _children => {
    ...component,
    render: _self =>
        <div>
            ("help page" |> ReasonReact.stringToElement)
            <Title title="Rico" subtitle="Is one bad motherfucker" />
        </div>
};

