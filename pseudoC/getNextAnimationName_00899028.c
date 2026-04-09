// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextAnimationName
// Entry Point: 00899028
// Size: 248 bytes
// Signature: undefined getNextAnimationName(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PedestrianGroupData::getNextAnimationName() */

void PedestrianGroupData::getNextAnimationName(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  undefined8 *in_x8;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  
  lVar1 = *(long *)(in_x0 + 0x90);
  lVar2 = *(long *)(in_x0 + 0x98);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (lVar2 != lVar1) {
    fVar7 = (float)MathUtil::getRandomMinMax(0.0,*(float *)(in_x0 + 0xc4));
    iVar3 = (int)((ulong)(*(long *)(in_x0 + 0x98) - *(long *)(in_x0 + 0x90)) >> 3) * -0x55555555;
    uVar6 = iVar3 - 1;
    if (1 < iVar3) {
      uVar5 = 0;
      do {
        if ((fVar7 <= *(float *)(*(long *)(in_x0 + 0xa8) + uVar5 * 4)) &&
           (fVar7 <= *(float *)(*(long *)(in_x0 + 0xa8) + uVar5 * 4 + 4))) {
          uVar6 = (uint)uVar5;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    plVar4 = (long *)(*(long *)(in_x0 + 0x90) + (long)(int)uVar6 * 0x18);
    uVar5 = plVar4[1] - *plVar4;
    if (uVar5 != 0) {
                    /* try { // try from 008990e4 to 0089910f has its CatchHandler @ 00899120 */
      iVar3 = MathUtil::getRandomMinMax(0,(int)(uVar5 >> 3) * -0x55555555 + -1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                in_x8,(basic_string *)
                      (*(long *)(*(long *)(in_x0 + 0x90) + (long)(int)uVar6 * 0x18) +
                      (long)iVar3 * 0x18));
    }
  }
  return;
}


