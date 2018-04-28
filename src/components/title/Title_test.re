open Jest;

describe("Title component", () => {
    open Expect;
    test("renders a title", () => {
        let component = (<Title title="Pride" subtitle="Lorem ipsum dolor sit amet, consectetur adipiscing elit"/> |> Enzyme.shallow);
        let renderedHeader = component |> Enzyme.find("h1");

        expect(renderedHeader |> Enzyme.text) |> toEqual("Pride");
    });
})