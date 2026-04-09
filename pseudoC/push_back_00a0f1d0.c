// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00a0f1d0
// Size: 480 bytes
// Signature: undefined __thiscall push_back(SmallVector<EnvMapBlender::LoadingFile,4u> * this, LoadingFile * param_1)


/* SmallVector<EnvMapBlender::LoadingFile, 4u>::push_back(EnvMapBlender::LoadingFile const&) */

void __thiscall
SmallVector<EnvMapBlender::LoadingFile,4u>::push_back
          (SmallVector<EnvMapBlender::LoadingFile,4u> *this,LoadingFile *param_1)

{
  uint uVar1;
  SmallVector<EnvMapBlender::LoadingFile,4u> SVar2;
  undefined8 uVar3;
  SmallVector<EnvMapBlender::LoadingFile,4u> *pSVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(uint *)this;
  if (uVar1 < 4) {
    uVar8 = *(undefined8 *)param_1;
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0xc) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 4) = uVar8;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x1c) = uVar7;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x14) = uVar3;
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x4c) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x44) = uVar7;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x3c) = uVar11;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x34) = uVar10;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x54) = uVar3;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x2c) = uVar9;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x24) = uVar8;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(this + (ulong)uVar1 * 0xa8 + 0x5c));
    uVar8 = *(undefined8 *)(param_1 + 0x88);
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    SVar2 = *(SmallVector<EnvMapBlender::LoadingFile,4u> *)(param_1 + 0xa0);
    uVar10 = *(undefined8 *)(param_1 + 0x78);
    uVar9 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x9c) = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x94) = uVar3;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x8c) = uVar8;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x84) = uVar7;
    this[(ulong)uVar1 * 0xa8 + 0xa4] = SVar2;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x7c) = uVar10;
    *(undefined8 *)(this + (ulong)uVar1 * 0xa8 + 0x74) = uVar9;
  }
  else {
    if (uVar1 == 4) {
      std::__ndk1::
      vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>>::reserve
                ((vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>>
                  *)(this + 0x2a8),5);
      if (*(int *)this != 0) {
        uVar5 = 0;
        pSVar4 = this + 0x5c;
        do {
          puVar6 = *(undefined8 **)(this + 0x2b0);
          if (puVar6 == *(undefined8 **)(this + 0x2b8)) {
            std::__ndk1::
            vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>>::
            __push_back_slow_path<EnvMapBlender::LoadingFile_const&>
                      ((vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>>
                        *)(this + 0x2a8),(LoadingFile *)(pSVar4 + -0x58));
            SVar2 = *pSVar4;
          }
          else {
            uVar8 = *(undefined8 *)(pSVar4 + -0x58);
            uVar7 = *(undefined8 *)(pSVar4 + -0x40);
            uVar3 = *(undefined8 *)(pSVar4 + -0x48);
            puVar6[1] = *(undefined8 *)(pSVar4 + -0x50);
            *puVar6 = uVar8;
            puVar6[3] = uVar7;
            puVar6[2] = uVar3;
            uVar9 = *(undefined8 *)(pSVar4 + -0x28);
            uVar8 = *(undefined8 *)(pSVar4 + -0x10);
            uVar7 = *(undefined8 *)(pSVar4 + -0x18);
            uVar3 = *(undefined8 *)(pSVar4 + -8);
            uVar11 = *(undefined8 *)(pSVar4 + -0x30);
            uVar10 = *(undefined8 *)(pSVar4 + -0x38);
            puVar6[7] = *(undefined8 *)(pSVar4 + -0x20);
            puVar6[6] = uVar9;
            puVar6[9] = uVar8;
            puVar6[8] = uVar7;
            puVar6[10] = uVar3;
            puVar6[5] = uVar11;
            puVar6[4] = uVar10;
                    /* try { // try from 00a0f2d0 to 00a0f2d7 has its CatchHandler @ 00a0f3b8 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)(puVar6 + 0xb));
            uVar7 = *(undefined8 *)(pSVar4 + 0x40);
            uVar3 = *(undefined8 *)(pSVar4 + 0x38);
            uVar9 = *(undefined8 *)(pSVar4 + 0x30);
            uVar8 = *(undefined8 *)(pSVar4 + 0x28);
            uVar11 = *(undefined8 *)(pSVar4 + 0x20);
            uVar10 = *(undefined8 *)(pSVar4 + 0x18);
            *(SmallVector<EnvMapBlender::LoadingFile,4u> *)(puVar6 + 0x14) = pSVar4[0x48];
            puVar6[0x11] = uVar9;
            puVar6[0x10] = uVar8;
            puVar6[0x13] = uVar7;
            puVar6[0x12] = uVar3;
            puVar6[0xf] = uVar11;
            puVar6[0xe] = uVar10;
            *(undefined8 **)(this + 0x2b0) = puVar6 + 0x15;
            SVar2 = *pSVar4;
          }
          if (((byte)SVar2 & 1) != 0) {
            operator_delete(*(void **)(pSVar4 + 0x10));
          }
          uVar5 = uVar5 + 1;
          pSVar4 = pSVar4 + 0xa8;
        } while (uVar5 < *(uint *)this);
      }
    }
    puVar6 = *(undefined8 **)(this + 0x2b0);
    if (puVar6 == *(undefined8 **)(this + 0x2b8)) {
      std::__ndk1::
      vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>>::
      __push_back_slow_path<EnvMapBlender::LoadingFile_const&>
                ((vector<EnvMapBlender::LoadingFile,std::__ndk1::allocator<EnvMapBlender::LoadingFile>>
                  *)(this + 0x2a8),param_1);
    }
    else {
      uVar8 = *(undefined8 *)param_1;
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      puVar6[1] = *(undefined8 *)(param_1 + 8);
      *puVar6 = uVar8;
      puVar6[3] = uVar7;
      puVar6[2] = uVar3;
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      puVar6[7] = *(undefined8 *)(param_1 + 0x38);
      puVar6[6] = uVar11;
      puVar6[9] = uVar8;
      puVar6[8] = uVar7;
      puVar6[10] = uVar3;
      puVar6[5] = uVar10;
      puVar6[4] = uVar9;
                    /* try { // try from 00a0f35c to 00a0f35f has its CatchHandler @ 00a0f3b0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar6 + 0xb));
      uVar9 = *(undefined8 *)(param_1 + 0x88);
      uVar8 = *(undefined8 *)(param_1 + 0x80);
      uVar7 = *(undefined8 *)(param_1 + 0x98);
      uVar3 = *(undefined8 *)(param_1 + 0x90);
      uVar11 = *(undefined8 *)(param_1 + 0x78);
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      *(LoadingFile *)(puVar6 + 0x14) = param_1[0xa0];
      puVar6[0x11] = uVar9;
      puVar6[0x10] = uVar8;
      puVar6[0x13] = uVar7;
      puVar6[0x12] = uVar3;
      puVar6[0xf] = uVar11;
      puVar6[0xe] = uVar10;
      *(undefined8 **)(this + 0x2b0) = puVar6 + 0x15;
    }
  }
  *(int *)this = *(int *)this + 1;
  return;
}


