open Jest;

describe("Title component", () => {
    open Expect;
    test("renders a title", () => {
        let component = (<Title title="Pride" subtitle="Lorem ipsum dolor sit amet, consectetur adipiscing elit"/> |> Enzyme.shallow);
        let renderedTitle = component |> Enzyme.find("h1");

        expect(renderedTitle |> Enzyme.text) |> toEqual("Pride");
    });

    test("renders a subtitle", () => {
        let component = (<Title title="Pride" subtitle="Lorem ipsum dolor sit amet, consectetur adipiscing elit"/> |> Enzyme.shallow);
        let renderedSubTitle = component |> Enzyme.find("h3");

        expect(renderedSubTitle |> Enzyme.text) |> toEqual("Lorem ipsum dolor sit amet, consectetur adipiscing elit");
    });
})