#!/usr/bin/env groovy

// now we can perform only "module_" tests - unit tests (on branch commit, open/commit to PR)

// TODO: before merge to trunk/develop/master we should provide the following list of tests: 
// - "regression_" for finding regressions
// - "integration_" for integration tests
// - "system_" for system tests, respectively.

def chooseTestType() {
	return "module_*"
}

return this
