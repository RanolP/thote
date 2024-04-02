export class Env {
	/**
	 *
	 * @param {import("../source-file.js").SourceFile} file
	 * @param {import("../symbol-table.js").Scope} scope
	 */
	constructor(file, scope) {
		/**
		 * @type {import("../source-file.js").SourceFile}
		 */
		this.file = file;
		/**
		 * @type import("../symbol-table.js").Scope
		 */
		this.scope = scope;
	}
}
