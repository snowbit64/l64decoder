// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WindowSlider
// Entry Point: 00c83bc4
// Size: 216 bytes
// Signature: undefined __thiscall WindowSlider(WindowSlider * this, Integer * param_1, bool param_2, uint param_3)


/* CryptoPP::WindowSlider::WindowSlider(CryptoPP::Integer const&, bool, unsigned int) */

void __thiscall
CryptoPP::WindowSlider::WindowSlider(WindowSlider *this,Integer *param_1,bool param_2,uint param_3)

{
  uint uVar1;
  Integer *pIVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_3;
  Integer::Integer((Integer *)this,param_1);
                    /* try { // try from 00c83be4 to 00c83bf7 has its CatchHandler @ 00c83cb0 */
  pIVar2 = (Integer *)Integer::One();
  Integer::Integer((Integer *)(this + 0x30),pIVar2);
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(uint *)(this + 0x60) = param_3;
  this[0x6c] = (WindowSlider)param_2;
  *(undefined2 *)(this + 0x6d) = 0x100;
  this[0x6f] = (WindowSlider)0x0;
  if (param_3 == 0) {
                    /* try { // try from 00c83c18 to 00c83c1f has its CatchHandler @ 00c83c9c */
    uVar1 = Integer::BitCount();
    if (uVar1 < 0x12) {
      uVar4 = 1;
    }
    else if (uVar1 < 0x19) {
      uVar4 = 2;
    }
    else if (uVar1 < 0x47) {
      uVar4 = 3;
    }
    else if (uVar1 < 0xc6) {
      uVar4 = 4;
    }
    else if (uVar1 < 0x21c) {
      uVar4 = 5;
    }
    else {
      uVar3 = 6;
      if (0x59a < uVar1) {
        uVar3 = 7;
      }
      uVar4 = (ulong)uVar3;
    }
    *(int *)(this + 0x60) = (int)uVar4;
  }
                    /* try { // try from 00c83c84 to 00c83c8b has its CatchHandler @ 00c83ca0 */
  Integer::operator<<=((Integer *)(this + 0x30),uVar4);
  return;
}


