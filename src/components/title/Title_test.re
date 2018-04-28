open Jest;

describe("Title component", () => {
    open Expect;
    test("renders a title", () => {
        let component = (<Title title="hey" subtitle="rico"/> |> Enzyme.shallow);
        let renderedHeader = component |> Enzyme.find("h1");

        expect(renderedHeader |> Enzyme.text) |> toEqual("London Pride!");
    });
})