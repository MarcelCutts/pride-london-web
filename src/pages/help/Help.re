let component = ReasonReact.statelessComponent("Help");

let make = _children => {
    ...component,
    render: _self =>
        <div>
            <Title title="Help" subtitle="Lorem ipsum dolor sit amet, consectetur adipiscing elit" />
        </div>
};

