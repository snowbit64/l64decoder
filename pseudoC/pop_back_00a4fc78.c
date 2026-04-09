// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pop_back
// Entry Point: 00a4fc78
// Size: 364 bytes
// Signature: undefined __thiscall pop_back(SmallVector<AudioSourceSample::Element,1u> * this, bool param_1)


/* SmallVector<AudioSourceSample::Element, 1u>::pop_back(bool) */

void __thiscall
SmallVector<AudioSourceSample::Element,1u>::pop_back
          (SmallVector<AudioSourceSample::Element,1u> *this,bool param_1)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar4 = *(int *)this;
  uVar3 = iVar4 - 1;
  if (iVar4 == 0 || uVar3 == 0) {
    if (((byte)this[(ulong)uVar3 * 0x38 + 0xc] & 1) != 0) {
      operator_delete(*(void **)(this + (ulong)uVar3 * 0x38 + 0x1c));
      uVar3 = *(int *)this - 1;
    }
    *(uint *)this = uVar3;
  }
  else {
    lVar6 = *(long *)(this + 0x48);
    if ((*(byte *)(lVar6 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar6 + -0x20));
      iVar4 = *(int *)this;
    }
    lVar5 = *(long *)(this + 0x40);
    lVar6 = lVar6 + -0x38;
    uVar3 = iVar4 - 1;
    *(long *)(this + 0x48) = lVar6;
    *(uint *)this = uVar3;
    if ((ulong)((lVar6 - lVar5 >> 3) * 0x6db6db6db6db6db7) < 2) {
      if (uVar3 != 0) {
        lVar6 = 0;
        while( true ) {
          puVar1 = (undefined4 *)(lVar5 + lVar6);
          *(undefined4 *)(this + lVar6 + 4) = *puVar1;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)(this + lVar6 + 0xc));
          uVar8 = *(undefined8 *)(puVar1 + 10);
          uVar7 = *(undefined8 *)(puVar1 + 8);
          *(undefined8 *)(this + lVar6 + 0x34) = *(undefined8 *)(puVar1 + 0xc);
          *(undefined8 *)(this + lVar6 + 0x2c) = uVar8;
          *(undefined8 *)(this + lVar6 + 0x24) = uVar7;
          if ((ulong)uVar3 * 0x38 + -0x38 == lVar6) break;
          lVar5 = *(long *)(this + 0x40);
          lVar6 = lVar6 + 0x38;
        }
        lVar5 = *(long *)(this + 0x40);
        lVar6 = *(long *)(this + 0x48);
      }
      *(uint *)this = uVar3;
      while (lVar2 = lVar6, lVar2 != lVar5) {
        lVar6 = lVar2 + -0x38;
        if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
          operator_delete(*(void **)(lVar2 + -0x20));
        }
      }
      *(long *)(this + 0x48) = lVar5;
      if (!param_1) {
        std::__ndk1::
        vector<AudioSourceSample::Element,std::__ndk1::allocator<AudioSourceSample::Element>>::
        shrink_to_fit();
        return;
      }
    }
  }
  return;
}


