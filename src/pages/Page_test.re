open Jest;

Enzyme.configureEnzyme(Enzyme.react_16_adapter());

describe("Page component", () => ({
    test("renders", () => {
        let component = (<Page message="test" /> |> Enzyme.shallow);
        Expect.expect(component) |> Expect.toMatchSnapshot;
    })
}));