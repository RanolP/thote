export class Scope {
	/**
	 *
	 * @param {Scope | null} parent
	 */
	constructor(parent = null) {
		/**
		 * @type {Scope | null}
		 */
		this.parent = parent;
		/**
		 * @type {Scope}
		 */
		this.global = this.parent ? this.parent.global : this;
	}
}
