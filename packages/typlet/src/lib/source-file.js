import { readFile } from "node:fs/promises";

export class SourceFile {
	static #counter = 0;

	/**
	 * @param {string} path
	 * @param {string} content
	 */
	constructor(path, content, id) {
		/**
		 * @type {string}
		 */
		this.path = path;
		/**
		 * @type {string}
		 */
		this.content = content;
		/**
		 * @type {number}
		 */
		this.id = id;
	}

	/**
	 *
	 * @param {string} path
	 * @returns {Promise<SourceFile>}
	 */
	static async of(path) {
		const content = await readFile(path, { encoding: "utf8" });
		return new SourceFile(path, content, SourceFile.#counter++);
	}
}
