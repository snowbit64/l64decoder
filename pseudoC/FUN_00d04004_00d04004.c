// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d04004
// Entry Point: 00d04004
// Size: 716 bytes
// Signature: undefined FUN_00d04004(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined param_9, undefined param_10, undefined1[16] param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15, undefined8 param_16, undefined8 param_17, undefined8 param_18, undefined8 param_19, undefined8 param_20)


void FUN_00d04004(undefined *param_1,undefined param_2 [16])

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  undefined8 in_x9;
  undefined8 uVar10;
  undefined8 in_x10;
  long lVar11;
  undefined8 in_x11;
  undefined8 in_x13;
  undefined8 *unaff_x19;
  uint unaff_w20;
  Integer *unaff_x21;
  uint unaff_w22;
  int unaff_w23;
  long unaff_x24;
  int unaff_w26;
  uint uVar12;
  long unaff_x29;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint param_11;
  undefined8 in_stack_00000018;
  undefined8 param_12;
  ulong param_13;
  ulong in_stack_00000038;
  void *param_14;
  
  *(undefined8 *)(param_1 + 0x128) = in_x10;
  *(undefined8 *)(param_1 + 0x130) = in_x9;
  *(undefined8 *)(param_1 + 0x138) = in_x11;
  *(undefined8 *)(param_1 + 0xe0) = in_x13;
  *(code **)(param_1 + 0xe8) = CryptoPP::Baseline_Square4;
  *(code **)(param_1 + 0xf0) = CryptoPP::Baseline_Square8;
  *(code **)(param_1 + 0x180) = CryptoPP::Baseline_MultiplyTop8;
  *(code **)(param_1 + 0xb8) = CryptoPP::Baseline_Multiply16;
  *(code **)(param_1 + 0x148) = CryptoPP::Baseline_MultiplyBottom16;
  *(code **)(param_1 + 0x100) = CryptoPP::Baseline_Square16;
  *(code **)(param_1 + 400) = CryptoPP::Baseline_MultiplyTop16;
  *param_1 = 1;
  DataMemoryBarrier(2,3);
  *(long *)(unaff_x29 + -0x20) = param_2._8_8_;
  *(long *)(unaff_x29 + -0x28) = param_2._0_8_;
  *(undefined ***)(unaff_x29 + -0x38) = &PTR__Integer_0100c890;
                    /* try { // try from 00d04080 to 00d04087 has its CatchHandler @ 00d042e8 */
  puVar5 = (undefined8 *)CryptoPP::UnalignedAllocate(8);
  *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
  *(undefined4 *)(unaff_x29 + -0x10) = 0;
  *puVar5 = 0;
  uVar12 = 0;
  iVar2 = *(int *)(unaff_x21 + 0x28);
  cVar9 = 'W';
  if ((int)unaff_w20 < 0) {
    cVar9 = '7';
  }
  do {
    if ((iVar2 != 1) && (**(int **)(unaff_x21 + 0x20) == 0)) {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      do {
        if (lVar7 == 0) goto LAB_00d04154;
        lVar11 = lVar7 + -1;
        lVar4 = lVar7 + -1;
        lVar7 = lVar11;
      } while ((*(int **)(unaff_x21 + 0x20))[lVar4] == 0);
      if ((int)lVar11 == -1) {
LAB_00d04154:
        _param_11 = 0;
        in_stack_00000018 = 0;
        param_12 = 0;
                    /* try { // try from 00d04160 to 00d0418b has its CatchHandler @ 00d042f4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve((ulong)&stack0x00000010);
        if (unaff_w23 == 1) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)&stack0x00000010);
        }
        if (unaff_w26 != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)&stack0x00000010);
        }
        uVar8 = (ulong)uVar12;
        while (uVar8 = uVar8 - 1, uVar8 != 0xffffffffffffffff) {
                    /* try { // try from 00d041a8 to 00d041af has its CatchHandler @ 00d04300 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    ((char)&stack0x00000010);
        }
        if ((unaff_w20 >> 0x1e & 1) != 0) {
          switch(unaff_w22 - 2 >> 1 | unaff_w22 << 0x1f) {
          case 0:
                    /* try { // try from 00d0428c to 00d042d7 has its CatchHandler @ 00d042f4 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back((char)&stack0x00000010);
            break;
          case 3:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back((char)&stack0x00000010);
            break;
          case 4:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back((char)&stack0x00000010);
            break;
          case 7:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back((char)&stack0x00000010);
          }
        }
        pvVar6 = *(void **)(unaff_x29 + -0x18);
        uVar8 = *(ulong *)(unaff_x29 + -0x28);
        if (*(ulong *)(unaff_x29 + -0x20) <= *(ulong *)(unaff_x29 + -0x28)) {
          uVar8 = *(ulong *)(unaff_x29 + -0x20);
        }
        unaff_x19[1] = in_stack_00000018;
        *unaff_x19 = _param_11;
        unaff_x19[2] = param_12;
        *(undefined ***)(unaff_x29 + -0x38) = &PTR__Integer_0100c890;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)((long)pvVar6 + uVar8 * 4 + -4) = 0;
        }
                    /* try { // try from 00d04204 to 00d04207 has its CatchHandler @ 00d042e4 */
        CryptoPP::UnalignedDeallocate(pvVar6);
        uVar8 = param_13;
        if (in_stack_00000038 <= param_13) {
          uVar8 = in_stack_00000038;
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined *)((long)param_14 + (uVar8 - 1)) = 0;
        }
                    /* try { // try from 00d04230 to 00d04233 has its CatchHandler @ 00d042e0 */
        CryptoPP::UnalignedDeallocate(param_14);
        if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
                    /* try { // try from 00d040e8 to 00d040fb has its CatchHandler @ 00d042f8 */
    CryptoPP::Integer::Divide(&stack0x00000010,(Integer *)(unaff_x29 + -0x38),unaff_x21,unaff_w22);
    cVar1 = '0';
    if (9 < param_11) {
      cVar1 = cVar9;
    }
    *(char *)((long)param_14 + (ulong)uVar12) = cVar1 + (char)_param_11;
    uVar12 = uVar12 + 1;
    uVar10 = *(undefined8 *)(unaff_x21 + 0x20);
    uVar14 = *(undefined8 *)(unaff_x29 + -0x20);
    uVar13 = *(undefined8 *)(unaff_x29 + -0x28);
    uVar16 = *(undefined8 *)(unaff_x21 + 0x18);
    uVar15 = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(unaff_x21 + 0x20) = *(undefined8 *)(unaff_x29 + -0x18);
    iVar2 = *(int *)(unaff_x29 + -0x10);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar10;
    uVar3 = *(undefined4 *)(unaff_x21 + 0x28);
    *(undefined8 *)(unaff_x21 + 0x18) = uVar14;
    *(undefined8 *)(unaff_x21 + 0x10) = uVar13;
    *(undefined8 *)(unaff_x29 + -0x20) = uVar16;
    *(undefined8 *)(unaff_x29 + -0x28) = uVar15;
    *(int *)(unaff_x21 + 0x28) = iVar2;
    *(undefined4 *)(unaff_x29 + -0x10) = uVar3;
  } while( true );
}


