// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ECP
// Entry Point: 00c9cc64
// Size: 128 bytes
// Signature: undefined __thiscall ECP(ECP * this)


/* CryptoPP::ECP::ECP() */

void __thiscall CryptoPP::ECP::ECP(ECP *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__ECP_01005df8;
  *(undefined ***)(this + 8) = &PTR__ECP_01005eb8;
                    /* try { // try from 00c9cc94 to 00c9cc9b has its CatchHandler @ 00c9cd18 */
  Integer::Integer((Integer *)(this + 0x18));
                    /* try { // try from 00c9cca0 to 00c9cca7 has its CatchHandler @ 00c9cd08 */
  Integer::Integer((Integer *)(this + 0x48));
  *(undefined ***)(this + 0x78) = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00c9ccbc to 00c9ccc3 has its CatchHandler @ 00c9ccf8 */
  Integer::Integer((Integer *)(this + 0x80));
                    /* try { // try from 00c9ccc8 to 00c9cccb has its CatchHandler @ 00c9cce4 */
  Integer::Integer((Integer *)(this + 0xb0));
  this[0xe0] = (ECP)0x1;
  return;
}


