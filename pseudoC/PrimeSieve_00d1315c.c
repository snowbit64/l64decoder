// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PrimeSieve
// Entry Point: 00d1315c
// Size: 120 bytes
// Signature: undefined __thiscall PrimeSieve(PrimeSieve * this, Integer * param_1, Integer * param_2, Integer * param_3, int param_4)


/* CryptoPP::PrimeSieve::PrimeSieve(CryptoPP::Integer const&, CryptoPP::Integer const&,
   CryptoPP::Integer const&, int) */

void __thiscall
CryptoPP::PrimeSieve::PrimeSieve
          (PrimeSieve *this,Integer *param_1,Integer *param_2,Integer *param_3,int param_4)

{
  Integer::Integer((Integer *)this,param_1);
                    /* try { // try from 00d13188 to 00d13193 has its CatchHandler @ 00d13204 */
  Integer::Integer((Integer *)(this + 0x30),param_2);
                    /* try { // try from 00d13198 to 00d131a3 has its CatchHandler @ 00d131f4 */
  Integer::Integer((Integer *)(this + 0x60),param_3);
  *(int *)(this + 0x90) = param_4;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0xa4) = 0;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xac) = 0;
                    /* try { // try from 00d131b8 to 00d131bf has its CatchHandler @ 00d131d4 */
  DoSieve();
  return;
}


