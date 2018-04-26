# Contribution Guide 🦄

Thank you so much for wanting to contribute!

This document aims to inform you about how best to go about lending your time to the Pride in London ewb application.

## 🤔 What is this project about?
Pride in London is an organisation that promotes diverse communities and events in London, UK. Each year there is one large Pride event in the Summer which entails an awfully large number of people and spectacular amounts of effort.

In the past, there has been an organic mishmash of technology that made up the main web and mobile products that Pride relies on. This year, they've had the bright idea of tapping into the tech talent pool (that's you!) to develop a new web platform to replace the current system. 

The broad goals are:

- Integrate with a CMS so content can be managed without developer intervention
- Modern, component based UI system to allow for future development
- Create a platform allowing user contribution and moderation for future events


## ‍‍🏋️‍♀️ Ways of working
We’ve arranged the current tasks in priority order on the GitHub project page. Each ticket is an issue with requirements and, if it’s a UI task, some sort of guiding wireframe. If you wish to undertake a ticket, mark that you are working on it by assigning it to yourself. Try and assign only one things to yourself at a time - if you get stuck on a task just ask for help!

Designs are handled via [SketchApp](https://www.sketchapp.com/). If you don't have access to this or the free trials, there are free viewers such as [Lunacy](https://icons8.com/lunacy) for Windows and [Zepplin](https://app.zeplin.io) for Mac.

We have a Pride slack that you can request access to, so we can more easily coordinate and communicate with the UI/UX humans.

Our 🏆definition of done🏆 is that the feature must be deployed on master and signed off by our product owner - who in this case is the wonderful Kristopher Hamilton. I’ll be having weekly calls with him to tick things off our list and you’ll all be welcome to join the google hangout.

## 📝 Project tasks
The project can be summarised as a site with pages that pull content from a CMS. For our MVP release, we have no concerns about pushing data up in any way, so our tasks will centre around either adding data types into Contentful (the CMS we’ll be using), fetching that content, and then rendering components based on the content received. 

We don’t have the final versions of any particular pages and their content yet - but we can get the skeleton of these pages complete and have a first pass on look and feel by following this [style guide](https://drive.google.com/open?id=1vRZ9x9td6cO0REb1wnAREyy3Ki0GVOXZ). A separate ticket will be created for each feature when the minutia has been decided.

You’ll need credentials to do things within Contentful, so pester @marcelcutts for those while he pesters others to provide a mechanism for us to give them to ourselves.

We have a focused set of features we aim to deliver for this year's Pride parade, ideally by **mid May 2018**.  All features and bugs for this goal are tracked via GitHub issues board. The features are prioritised - but unless otherwise stated, tasks should be available to be completed in any order.

Each feature should have a clear description of what needs to be done and why. Additionally there may be wireframes or technical notes to guide you along.

We will also inevitably start having bugs. These may be smaller tasks and contain details of the incorrect behaviour, why this is bad, and exactly how to reproduce it.

## Pull requests

If you fixed a bug or completed a feature, you can submit a pull-request. It will be reviewed by a maintainer and accepted, or commented for rework, or declined.

### Before submitting a PR
1. Please review our suggested commit message format.
1. Make sure you have tests for your modifications
1. Run `yarn test` locally to catch any errors.


### Why did you close my pull request or issue?
Nothing is worse than a project with hundreds of stale issues. To keep things orderly, the maintainers try to close/resolve issues as quickly as possible.


## Filing Bugs
If you found an error, typo, or any other flaw in the project, please report it using GitHub Issues. Try searching the issues to see if there is an existing report of your bug or feature request.

When it comes to bugs, the more details you provide, the easier it is to reproduce the issue and the faster it could be fixed.

Some helpful datapoints to provide (if you can):

Specific errors that are visible
A failing test would be amazing
Code snippets that make the application exhibit that behaviour
Your operating system and browser



## Commit Message Format
We're borrowing the commit rules from [Git SCM](http://git-scm.com/book/ch5-2.html)

> ```
> Short (50 chars or less) summary of changes
> 
> More detailed explanatory text, if necessary.  Wrap it to about 72
> characters or so.  In some contexts, the first line is treated as the
> subject of an email and the rest of the text as the body.  The blank
> line separating the summary from the body is critical (unless you omit
> the body entirely); tools like rebase can get confused if you run the
> two together.
> 
> Further paragraphs come after blank lines.
> 
>   - Bullet points are okay, too
> 
>   - Typically a hyphen or asterisk is used for the bullet, preceded by a
>     single space, with blank lines in between, but conventions vary here
> ```

### Tips
* Write the summary line and description of what you have done in the imperative mode, that is as if you were commanding someone. Start the line with "Fix", "Add", "Change" instead of "Fixed", "Added", "Changed".
* If it seems difficult to summarize what your commit does, it may be because it includes several logical changes or bug fixes, and are better split up into several commits using `git add -p`.

## Maintainers
The current maintainer is Marcel Cutts (@marcelcutts).

The project is being developed by the community. Maintainers merge pull-requests and fix critical bugs. All other features and patches are welcomed to be implemented by community members.
