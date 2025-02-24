# CS405-Portfolio
## Course Overview: Secure Coding and Software Design
This README provides a concise summary of key topics covered in the course, illustrating how they all contribute to an understanding of standard safe coding practices and support the creation of a comprehensive Software Design Document (SDD).

1. Buffer Overflow
A buffer overflow occurs when a program writes data outside the boundaries of pre-allocated memory. This can lead to crashes, corrupted data, or malicious code execution. Preventing buffer overflows involves:

Validating input sizes.
Utilizing secure functions for string and memory manipulation.
Employing compiler-level protections (e.g., stack canaries) where possible.
Key takeaway: Always ensure inputs are checked for length and properly handled to avoid overwriting memory.

2. Encryption
Encryption safeguards data both in transit and at rest. By converting plaintext into ciphertext using cryptographic algorithms, you significantly reduce the risk of unauthorized access. Common practices include:

Using strong encryption algorithms (e.g., AES-256).
Managing and storing cryptographic keys securely.
Employing TLS/SSL for secure data transmission.
Key takeaway: Robust encryption is foundational to data confidentiality and integrity.

3. Unit Testing
Unit testing involves writing tests for individual components or functions to verify their correctness. Well-structured unit tests:

Detect regressions quickly.
Provide confidence in code changes.
Serve as executable documentation.
Key takeaway: Comprehensive unit tests ensure that each module behaves as intended, reducing the risk of security and functionality issues slipping into production.

4. Static Code Analysis
Static code analysis tools scan source code for known vulnerabilities and coding defects without executing the code. Benefits include:

Early detection of potential security flaws (e.g., buffer overflows, injection risks).
Enforcement of coding standards.
Automated reporting on code quality metrics.
Key takeaway: Incorporating static analysis into the development pipeline helps maintain consistent, secure, and high-quality code.

5. Numeric Overflow
Numeric overflow occurs when an arithmetic operation exceeds the maximum (or minimum) value a variable can hold. This can lead to unexpected behavior, security vulnerabilities, or application crashes. Preventive measures include:

Performing boundary checks on arithmetic operations.
Using data types with sufficient range.
Handling edge cases in code.
Key takeaway: Validating numerical inputs and outputs helps prevent logic errors and security risks.

6. SQL Injection
SQL injection is an attack where malicious SQL statements are inserted into an entry field for execution. Best practices to mitigate SQL injection:

Use parameterized queries or prepared statements.
Sanitize and validate user inputs.
Employ least-privilege database accounts.
Key takeaway: Properly parameterizing queries and validating all input drastically reduces injection-based risks.

7. Exceptions
Exception handling enables robust error detection and controlled recovery within applications. Proper exception handling:

Prevents the program from crashing unexpectedly.
Ensures meaningful error messages and logs for debugging.
Protects sensitive information from being exposed in error outputs.
Key takeaway: Well-structured exception handling keeps applications stable and preserves critical security and diagnostic information.

8. Standard Safe Code Practices
Bringing these concepts together requires a consistent set of coding standards and guidelines, often documented in organizational policy. Adhering to safe coding practices means:

Integrating security checks at every phase of development (“shift left”).
Following established frameworks (e.g., OWASP, CERT Secure Coding).
Continuously updating standards to reflect emerging threats and best practices.
Key takeaway: Adopting and enforcing a secure coding standard ensures the entire team develops software with security as a core requirement.

9. Creating an SDD and Coding Standards
A Software Design Document (SDD) provides a detailed blueprint of an application’s architecture, requirements, and design decisions. When crafted with security in mind:

It outlines secure coding guidelines relevant to the project.
Defines how to handle threats like buffer overflows, SQL injection, and numeric overflow.
Establishes processes for encryption, unit testing, static analysis, and exception handling.
Aligns with organizational or industry-standard coding guidelines to maintain consistency and security.
Key takeaway: A well-defined SDD incorporates safe coding standards and ensures that security is an integral part of the design rather than an afterthought.

Conclusion
By understanding and applying knowledge of buffer overflows, encryption, unit testing, static code analysis, numeric overflow, SQL injection, exceptions, and standard safe coding practices, developers can craft robust and secure software. The creation of a detailed SDD that documents these practices and guidelines helps ensure that security considerations permeate all stages of development, ultimately protecting both the organization and its users.
