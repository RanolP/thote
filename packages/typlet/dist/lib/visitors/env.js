export class Env {
	/**
	 *
	 * @param {import("../source-file.js").SourceFile} file
	 * @param {import("../scope.js").Scope} scope
	 */
	constructor(file, scope) {
		/**
		 * @type {import("../source-file.js").SourceFile}
		 */
		this.file = file;
		/**
		 * @type import("../scope.js").Scope
		 */
		this.scope = scope;
	}
}
