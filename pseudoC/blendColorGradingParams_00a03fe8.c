// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: blendColorGradingParams
// Entry Point: 00a03fe8
// Size: 584 bytes
// Signature: undefined __thiscall blendColorGradingParams(PostFxParams * this, char * param_1, char * param_2, float param_3)


/* PostFxParams::blendColorGradingParams(char const*, char const*, float) */

undefined8 __thiscall
PostFxParams::blendColorGradingParams(PostFxParams *this,char *param_1,char *param_2,float param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  PostFxParams PVar3;
  PostFxParams PVar4;
  int iVar5;
  int iVar6;
  DomXMLFile *pDVar7;
  PostFxParams *pPVar8;
  PostFxParams *pPVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined8 uVar12;
  
  if ((((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_1 == '\0')) ||
     (*param_2 == '\0')) {
    auVar11 = NEON_fmov(0x3f800000,4);
    uVar12 = auVar11._8_8_;
    *(undefined8 *)(this + 0x78) = uVar12;
    uVar10 = auVar11._0_8_;
    *(undefined8 *)(this + 0x70) = uVar10;
    *(undefined8 *)(this + 0x88) = uVar12;
    *(undefined8 *)(this + 0x80) = uVar10;
    *(undefined8 *)(this + 0x98) = uVar12;
    *(undefined8 *)(this + 0x90) = uVar10;
    *(undefined8 *)(this + 0xa8) = uVar12;
    *(undefined8 *)(this + 0xa0) = uVar10;
    *(undefined8 *)(this + 0xb8) = uVar12;
    *(undefined8 *)(this + 0xb0) = uVar10;
    *(undefined8 *)(this + 200) = uVar12;
    *(undefined8 *)(this + 0xc0) = uVar10;
    *(undefined8 *)(this + 0xd8) = uVar12;
    *(undefined8 *)(this + 0xd0) = uVar10;
    *(undefined8 *)(this + 0xe8) = uVar12;
    *(undefined8 *)(this + 0xe0) = uVar10;
    *(undefined8 *)(this + 0x170) = 0x3f028f5c3e3851ec;
    *(undefined8 *)(this + 0xf8) = uVar12;
    *(undefined8 *)(this + 0xf0) = uVar10;
    *(undefined8 *)(this + 0x108) = uVar12;
    *(undefined8 *)(this + 0x100) = uVar10;
    *(undefined8 *)(this + 0x118) = uVar12;
    *(undefined8 *)(this + 0x110) = uVar10;
    *(undefined8 *)(this + 0x128) = uVar12;
    *(undefined8 *)(this + 0x120) = uVar10;
    *(undefined8 *)(this + 0x138) = uVar12;
    *(undefined8 *)(this + 0x130) = uVar10;
    *(undefined8 *)(this + 0x148) = uVar12;
    *(undefined8 *)(this + 0x140) = uVar10;
    *(undefined8 *)(this + 0x158) = uVar12;
    *(undefined8 *)(this + 0x150) = uVar10;
    *(undefined8 *)(this + 0x168) = uVar12;
    *(undefined8 *)(this + 0x160) = uVar10;
    return 1;
  }
  pPVar9 = this + 0x310;
  iVar5 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                    ((char *)pPVar9);
  if (iVar5 != 0) {
    iVar6 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((char *)(this + 0x330));
    if (iVar6 == 0) {
      memcpy(this + 0x354,this + 0x45c,0x108);
    }
    else {
      if (*(long **)(this + 0x328) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x328) + 8))();
      }
      pDVar7 = (DomXMLFile *)operator_new(0xd8);
                    /* try { // try from 00a04070 to 00a04073 has its CatchHandler @ 00a04234 */
      DomXMLFile::DomXMLFile(pDVar7);
      *(DomXMLFile **)(this + 0x328) = pDVar7;
      pPVar8 = (PostFxParams *)DomXMLFile::loadFromFile(pDVar7,param_1,true);
      if (((ulong)pPVar8 & 1) != 0) {
        loadColorGrading(pPVar8,*(DomXMLFile **)(this + 0x328),(ColorGradingCB *)(this + 0x354));
      }
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)pPVar9);
  iVar6 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                    ((char *)(this + 0x330));
  if (iVar6 == 0) {
    if (iVar5 == 0) {
      if (*(float *)(this + 0x350) != param_3) {
        PVar3 = this[0x330];
        PVar4 = this[0x310];
        uVar1 = (ulong)((byte)PVar3 >> 1);
        if (((byte)PVar3 & 1) != 0) {
          uVar1 = *(ulong *)(this + 0x338);
        }
        uVar2 = (ulong)((byte)PVar4 >> 1);
        if (((byte)PVar4 & 1) != 0) {
          uVar2 = *(ulong *)(this + 0x318);
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n != 0) {
          pPVar9 = *(PostFxParams **)(this + 0x340);
          pPVar8 = *(PostFxParams **)(this + 800);
          if (((byte)PVar3 & 1) == 0) {
            pPVar9 = this + 0x331;
          }
          if (((byte)PVar4 & 1) == 0) {
            pPVar8 = this + 0x311;
          }
          iVar5 = memcmp(pPVar8,pPVar9,__n);
          if (iVar5 != 0) goto LAB_00a04204;
        }
        if (uVar1 != uVar2) goto LAB_00a04204;
      }
      uVar10 = 0;
      goto LAB_00a0421c;
    }
  }
  else {
    iVar5 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((char *)pPVar9);
    if (iVar5 == 0) {
      memcpy(this + 0x45c,this + 0x354,0x108);
    }
    else {
      if (*(long **)(this + 0x348) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x348) + 8))();
      }
      pDVar7 = (DomXMLFile *)operator_new(0xd8);
                    /* try { // try from 00a04154 to 00a04157 has its CatchHandler @ 00a04230 */
      DomXMLFile::DomXMLFile(pDVar7);
      *(DomXMLFile **)(this + 0x348) = pDVar7;
      pPVar9 = (PostFxParams *)DomXMLFile::loadFromFile(pDVar7,param_2,true);
      if (((ulong)pPVar9 & 1) != 0) {
        loadColorGrading(pPVar9,*(DomXMLFile **)(this + 0x348),(ColorGradingCB *)(this + 0x45c));
      }
    }
  }
LAB_00a04204:
  ColorGradingCB::blend
            ((ColorGradingCB *)(this + 0x70),(ColorGradingCB *)(this + 0x354),
             (ColorGradingCB *)(this + 0x45c),param_3);
  uVar10 = 1;
LAB_00a0421c:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x330));
  *(float *)(this + 0x350) = param_3;
  return uVar10;
}


