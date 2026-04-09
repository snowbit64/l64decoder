// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 00a4b69c
// Size: 732 bytes
// Signature: undefined __thiscall resize(SmallVector<AudioSourceSample::Element,1u> * this, uint param_1, Element param_2, bool param_3)


/* SmallVector<AudioSourceSample::Element, 1u>::resize(unsigned int, AudioSourceSample::Element,
   bool) */

void __thiscall
SmallVector<AudioSourceSample::Element,1u>::resize
          (SmallVector<AudioSourceSample::Element,1u> *this,uint param_1,Element param_2,
          bool param_3)

{
  SmallVector<AudioSourceSample::Element,1u> SVar1;
  long lVar2;
  long lVar3;
  Element *pEVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  void **ppvVar9;
  ulong uVar10;
  undefined8 uVar11;
  void *pvVar12;
  undefined8 uVar13;
  void *pvVar14;
  
  pEVar4 = (Element *)(ulong)param_2;
  uVar5 = *(uint *)this;
  uVar6 = (ulong)param_1;
  if (uVar5 < 2) {
    if (param_1 < 2) {
      if (uVar5 < param_1) {
        *(Element *)(this + 4) = *pEVar4;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(this + 0xc));
        uVar13 = *(undefined8 *)(pEVar4 + 10);
        uVar11 = *(undefined8 *)(pEVar4 + 8);
        uVar5 = *(uint *)this;
        *(undefined8 *)(this + 0x34) = *(undefined8 *)(pEVar4 + 0xc);
        *(undefined8 *)(this + 0x2c) = uVar13;
        *(undefined8 *)(this + 0x24) = uVar11;
      }
      if (param_1 < uVar5) {
        ppvVar9 = (void **)(this + uVar6 * 0x38 + 0x1c);
        do {
          if (((byte)*(SmallVector<AudioSourceSample::Element,1u> *)(ppvVar9 + -2) & 1) != 0) {
            operator_delete(*ppvVar9);
            uVar5 = *(uint *)this;
          }
          uVar6 = uVar6 + 1;
          ppvVar9 = ppvVar9 + 7;
        } while (uVar6 < uVar5);
      }
      goto LAB_00a4b938;
    }
    std::__ndk1::
    vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>::reserve
              ((vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>
                *)(this + 0x40),uVar6);
    if (*(int *)this != 0) {
      uVar10 = 0;
      ppvVar9 = (void **)(this + 0x1c);
      do {
        puVar7 = *(undefined4 **)(this + 0x48);
        if (puVar7 == *(undefined4 **)(this + 0x50)) {
          std::__ndk1::
          vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>::
          __push_back_slow_path<AudioSourceSample::Element_const&>
                    ((vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>
                      *)(this + 0x40),(Element *)(ppvVar9 + -3));
          SVar1 = *(SmallVector<AudioSourceSample::Element,1u> *)(ppvVar9 + -2);
        }
        else {
          *puVar7 = *(undefined4 *)(ppvVar9 + -3);
                    /* try { // try from 00a4b828 to 00a4b82b has its CatchHandler @ 00a4b978 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(puVar7 + 2);
          pvVar14 = ppvVar9[2];
          pvVar12 = ppvVar9[1];
          *(void **)(puVar7 + 0xc) = ppvVar9[3];
          *(void **)(puVar7 + 10) = pvVar14;
          *(void **)(puVar7 + 8) = pvVar12;
          *(undefined4 **)(this + 0x48) = puVar7 + 0xe;
          SVar1 = *(SmallVector<AudioSourceSample::Element,1u> *)(ppvVar9 + -2);
        }
        if (((byte)SVar1 & 1) != 0) {
          operator_delete(*ppvVar9);
        }
        uVar10 = uVar10 + 1;
        ppvVar9 = ppvVar9 + 7;
      } while (uVar10 < *(uint *)this);
    }
    uVar10 = (*(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3) * 0x6db6db6db6db6db7;
    if (uVar6 <= uVar10) {
      if (uVar6 > uVar10 || uVar10 - uVar6 == 0) goto LAB_00a4b938;
      lVar8 = *(long *)(this + 0x40) + uVar6 * 0x38;
      lVar3 = *(long *)(this + 0x48);
      while (lVar2 = lVar3, lVar2 != lVar8) {
        lVar3 = lVar2 + -0x38;
        if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
          operator_delete(*(void **)(lVar2 + -0x20));
        }
      }
LAB_00a4b934:
      *(long *)(this + 0x48) = lVar8;
      goto LAB_00a4b938;
    }
  }
  else {
    if (param_1 < 2) {
      if (param_1 != 0) {
        puVar7 = *(undefined4 **)(this + 0x40);
        *(undefined4 *)(this + 4) = *puVar7;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)(this + 0xc));
        uVar13 = *(undefined8 *)(puVar7 + 10);
        uVar11 = *(undefined8 *)(puVar7 + 8);
        *(undefined8 *)(this + 0x34) = *(undefined8 *)(puVar7 + 0xc);
        *(undefined8 *)(this + 0x2c) = uVar13;
        *(undefined8 *)(this + 0x24) = uVar11;
      }
      *(uint *)this = param_1;
      lVar8 = *(long *)(this + 0x40);
      lVar3 = *(long *)(this + 0x48);
      while (lVar2 = lVar3, lVar2 != lVar8) {
        lVar3 = lVar2 + -0x38;
        if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
          operator_delete(*(void **)(lVar2 + -0x20));
        }
      }
      *(long *)(this + 0x48) = lVar8;
      if (!param_3) {
        std::__ndk1::
        vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>::
        shrink_to_fit();
      }
      goto LAB_00a4b938;
    }
    uVar10 = (*(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3) * 0x6db6db6db6db6db7;
    if (uVar6 <= uVar10) {
      if (uVar6 > uVar10 || uVar10 - uVar6 == 0) goto LAB_00a4b938;
      lVar8 = *(long *)(this + 0x40) + uVar6 * 0x38;
      lVar3 = *(long *)(this + 0x48);
      while (lVar2 = lVar3, lVar2 != lVar8) {
        lVar3 = lVar2 + -0x38;
        if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
          operator_delete(*(void **)(lVar2 + -0x20));
        }
      }
      goto LAB_00a4b934;
    }
  }
  std::__ndk1::vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>
  ::__append((vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>
              *)(this + 0x40),uVar6 - uVar10,pEVar4);
LAB_00a4b938:
  *(uint *)this = param_1;
  return;
}


