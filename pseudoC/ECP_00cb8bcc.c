// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ECP
// Entry Point: 00cb8bcc
// Size: 284 bytes
// Signature: undefined __thiscall ECP(ECP * this, Integer * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::ECP::ECP(CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&)
    */

void __thiscall CryptoPP::ECP::ECP(ECP *this,Integer *param_1,Integer *param_2,Integer *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__ECP_01005df8;
  *(undefined ***)(this + 8) = &PTR__ECP_01005eb8;
  puVar2 = (undefined8 *)operator_new(0xa8);
  puVar2[1] = &PTR__AbstractGroup_010009d8;
  puVar2[2] = puVar2;
  *puVar2 = &PTR__ModularArithmetic_0100c910;
                    /* try { // try from 00cb8c38 to 00cb8c43 has its CatchHandler @ 00cb8d58 */
  Integer::Integer((Integer *)(puVar2 + 3),param_1);
                    /* try { // try from 00cb8c4c to 00cb8c57 has its CatchHandler @ 00cb8d48 */
  Integer::Integer((Integer *)(puVar2 + 9),0,*(ulong *)(param_1 + 0x18));
                    /* try { // try from 00cb8c5c to 00cb8c5f has its CatchHandler @ 00cb8d38 */
  Integer::Integer((Integer *)(puVar2 + 0xf));
  iVar1 = *(int *)(param_2 + 0x28);
  *(undefined8 **)(this + 0x10) = puVar2;
  if (iVar1 == 1) {
                    /* try { // try from 00cb8c74 to 00cb8c93 has its CatchHandler @ 00cb8d18 */
    Integer::Plus(param_1);
  }
  else {
    Integer::Integer((Integer *)(this + 0x18),param_2);
  }
                    /* try { // try from 00cb8c98 to 00cb8ca3 has its CatchHandler @ 00cb8d08 */
  Integer::Integer((Integer *)(this + 0x48),param_3);
  *(undefined ***)(this + 0x78) = &PTR__ECPPoint_00fe9fd8;
                    /* try { // try from 00cb8cb8 to 00cb8cbf has its CatchHandler @ 00cb8cf8 */
  Integer::Integer((Integer *)(this + 0x80));
                    /* try { // try from 00cb8cc4 to 00cb8cc7 has its CatchHandler @ 00cb8ce8 */
  Integer::Integer((Integer *)(this + 0xb0));
  this[0xe0] = (ECP)0x1;
  return;
}


