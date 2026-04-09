// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeSpline
// Entry Point: 00940c0c
// Size: 232 bytes
// Signature: undefined __cdecl deserializeSpline(basic_string * param_1, uint * param_2, Spline * * param_3, uint param_4, uchar * param_5, uint param_6)


/* SerializationHelper::deserializeSpline(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, unsigned int&, Spline*&,
   unsigned int, unsigned char*, unsigned int) */

void SerializationHelper::deserializeSpline
               (basic_string *param_1,uint *param_2,Spline **param_3,uint param_4,uchar *param_5,
               uint param_6)

{
  uint *puVar1;
  FORM FVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  LinearSpline *this;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  
  iVar4 = *(int *)param_5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_1,(ulong)(param_5 + 4));
  uVar10 = (ulong)(iVar4 + 3) & 0xfffffffc;
  puVar1 = (uint *)(param_5 + 4 + uVar10);
  *param_2 = *puVar1;
  FVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar5 = uVar3 * 3;
  uVar9 = (ulong)uVar5;
  pfVar6 = (float *)operator_new__(uVar9 << 2);
  if (uVar5 != 0) {
    pfVar7 = (float *)(param_5 + uVar10 + 0x10);
    pfVar8 = pfVar6;
    do {
      uVar9 = uVar9 - 1;
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    } while (uVar9 != 0);
  }
  if (param_6 == 6) {
    this = (LinearSpline *)operator_new(0x38);
                    /* try { // try from 00940ca4 to 00940cab has its CatchHandler @ 00940cf8 */
    LinearSpline::LinearSpline(this,FVar2);
  }
  else {
    this = (LinearSpline *)operator_new(0x40);
                    /* try { // try from 00940cbc to 00940cc3 has its CatchHandler @ 00940cf4 */
    CubicSpline::CubicSpline((CubicSpline *)this,FVar2);
  }
  *param_3 = (Spline *)this;
  Spline::setCVs((Spline *)this,uVar3,pfVar6);
  operator_delete__(pfVar6);
  return;
}


