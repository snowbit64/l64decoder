// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009fe4b4
// Entry Point: 009fe4b4
// Size: 836 bytes
// Signature: undefined FUN_009fe4b4(void)


void FUN_009fe4b4(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 == (undefined8 *)param_1[2]) {
    puVar11 = (undefined8 *)*param_1;
    uVar4 = ((long)puVar10 - (long)puVar11) / 0x140;
    uVar1 = uVar4 + 1;
    if (0xcccccccccccccc < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= uVar4 * 2) {
      uVar1 = uVar4 * 2;
    }
    if (0x66666666666665 < uVar4) {
      uVar1 = 0xcccccccccccccc;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0xcccccccccccccc < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar5 = operator_new(uVar1 * 0x140);
    }
    uVar8 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    puVar6 = (undefined8 *)((long)pvVar5 + uVar4 * 0x140);
    uVar15 = param_2[5];
    uVar14 = param_2[4];
    uVar17 = param_2[7];
    uVar16 = param_2[6];
    puVar6[1] = param_2[1];
    *puVar6 = uVar8;
    puVar6[3] = uVar13;
    puVar6[2] = uVar12;
    uVar12 = param_2[0x20];
    uVar8 = param_2[0x1f];
    puVar6[5] = uVar15;
    puVar6[4] = uVar14;
    puVar6[7] = uVar17;
    puVar6[6] = uVar16;
    uVar14 = param_2[0x1e];
    uVar13 = param_2[0x1d];
    uVar16 = param_2[0x1c];
    uVar15 = param_2[0x1b];
    puVar6[0x20] = uVar12;
    puVar6[0x1f] = uVar8;
    uVar12 = param_2[0x1a];
    uVar8 = param_2[0x19];
    puVar6[0x1e] = uVar14;
    puVar6[0x1d] = uVar13;
    uVar14 = param_2[0x18];
    uVar13 = param_2[0x17];
    puVar6[0x1c] = uVar16;
    puVar6[0x1b] = uVar15;
    uVar16 = param_2[0x16];
    uVar15 = param_2[0x15];
    puVar6[0x1a] = uVar12;
    puVar6[0x19] = uVar8;
    uVar12 = param_2[0x14];
    uVar8 = param_2[0x13];
    puVar6[0x18] = uVar14;
    puVar6[0x17] = uVar13;
    uVar14 = param_2[0x12];
    uVar13 = param_2[0x11];
    puVar6[0x16] = uVar16;
    puVar6[0x15] = uVar15;
    uVar16 = param_2[0x26];
    uVar15 = param_2[0x25];
    puVar6[0x14] = uVar12;
    puVar6[0x13] = uVar8;
    uVar12 = param_2[0xc];
    uVar8 = param_2[0xb];
    puVar6[0x12] = uVar14;
    puVar6[0x11] = uVar13;
    uVar14 = param_2[0xe];
    uVar13 = param_2[0xd];
    puVar6[0x26] = uVar16;
    puVar6[0x25] = uVar15;
    puVar6[0xc] = uVar12;
    puVar6[0xb] = uVar8;
    uVar12 = param_2[0x10];
    uVar8 = param_2[0xf];
    puVar6[0xe] = uVar14;
    puVar6[0xd] = uVar13;
    puVar6[0x10] = uVar12;
    puVar6[0xf] = uVar8;
    uVar13 = param_2[0x24];
    uVar12 = param_2[0x23];
    *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(param_2 + 8);
    uVar8 = param_2[0x27];
    puVar6[0x24] = uVar13;
    puVar6[0x23] = uVar12;
    uVar13 = param_2[0x22];
    uVar12 = param_2[0x21];
    puVar2 = puVar6 + 0x28;
    puVar6[10] = &PTR__CullingBody_00fea1a8;
    puVar6[0x27] = uVar8;
    puVar6[0x22] = uVar13;
    puVar6[0x21] = uVar12;
    if (puVar10 != puVar11) {
      puVar7 = (undefined8 *)((long)pvVar5 + uVar4 * 0x140);
      do {
        puVar6 = puVar7 + -0x28;
        puVar9 = puVar10 + -0x28;
        uVar8 = *puVar9;
        puVar7[-0x27] = puVar10[-0x27];
        *puVar6 = uVar8;
        uVar16 = puVar10[-0x23];
        uVar15 = puVar10[-0x24];
        uVar12 = puVar10[-0x21];
        uVar8 = puVar10[-0x22];
        uVar3 = *(undefined4 *)(puVar10 + -0x20);
        uVar14 = puVar10[-0x25];
        uVar13 = puVar10[-0x26];
        puVar7[-0x1e] = &PTR__CullingBody_00fea1a8;
        puVar7[-0x23] = uVar16;
        puVar7[-0x24] = uVar15;
        puVar7[-0x21] = uVar12;
        puVar7[-0x22] = uVar8;
        *(undefined4 *)(puVar7 + -0x20) = uVar3;
        puVar7[-0x25] = uVar14;
        puVar7[-0x26] = uVar13;
        uVar8 = puVar10[-0x19];
        uVar13 = puVar10[-0x1a];
        uVar12 = puVar10[-0x1b];
        uVar15 = puVar10[-0x1c];
        uVar14 = puVar10[-0x1d];
        puVar7[-0x18] = puVar10[-0x18];
        puVar7[-0x19] = uVar8;
        puVar7[-0x1a] = uVar13;
        puVar7[-0x1b] = uVar12;
        puVar7[-0x1c] = uVar15;
        puVar7[-0x1d] = uVar14;
        uVar8 = puVar10[-0x11];
        uVar13 = puVar10[-0x12];
        uVar12 = puVar10[-0x13];
        uVar15 = puVar10[-0x14];
        uVar14 = puVar10[-0x15];
        uVar17 = puVar10[-0x16];
        uVar16 = puVar10[-0x17];
        puVar7[-0x10] = puVar10[-0x10];
        puVar7[-0x11] = uVar8;
        puVar7[-0x12] = uVar13;
        puVar7[-0x13] = uVar12;
        puVar7[-0x14] = uVar15;
        puVar7[-0x15] = uVar14;
        puVar7[-0x16] = uVar17;
        puVar7[-0x17] = uVar16;
        uVar8 = puVar10[-9];
        uVar13 = puVar10[-10];
        uVar12 = puVar10[-0xb];
        uVar15 = puVar10[-0xc];
        uVar14 = puVar10[-0xd];
        uVar17 = puVar10[-0xe];
        uVar16 = puVar10[-0xf];
        puVar7[-8] = puVar10[-8];
        puVar7[-9] = uVar8;
        puVar7[-10] = uVar13;
        puVar7[-0xb] = uVar12;
        puVar7[-0xc] = uVar15;
        puVar7[-0xd] = uVar14;
        puVar7[-0xe] = uVar17;
        puVar7[-0xf] = uVar16;
        uVar12 = puVar10[-6];
        uVar8 = puVar10[-7];
        uVar14 = puVar10[-2];
        uVar13 = puVar10[-3];
        uVar16 = puVar10[-4];
        uVar15 = puVar10[-5];
        puVar7[-1] = puVar10[-1];
        puVar7[-6] = uVar12;
        puVar7[-7] = uVar8;
        puVar7[-4] = uVar16;
        puVar7[-5] = uVar15;
        puVar7[-2] = uVar14;
        puVar7[-3] = uVar13;
        puVar10 = puVar9;
        puVar7 = puVar6;
      } while (puVar9 != puVar11);
      puVar10 = (undefined8 *)*param_1;
    }
    *param_1 = puVar6;
    param_1[1] = puVar2;
    param_1[2] = (void *)((long)pvVar5 + uVar1 * 0x140);
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
      return;
    }
  }
  else {
    uVar8 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar8;
    uVar16 = param_2[5];
    uVar15 = param_2[4];
    uVar12 = param_2[7];
    uVar8 = param_2[6];
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar14 = param_2[3];
    uVar13 = param_2[2];
    puVar10[10] = &PTR__CullingBody_00fea1a8;
    puVar10[5] = uVar16;
    puVar10[4] = uVar15;
    puVar10[7] = uVar12;
    puVar10[6] = uVar8;
    *(undefined4 *)(puVar10 + 8) = uVar3;
    puVar10[3] = uVar14;
    puVar10[2] = uVar13;
    uVar8 = param_2[0xf];
    uVar13 = param_2[0xe];
    uVar12 = param_2[0xd];
    uVar15 = param_2[0xc];
    uVar14 = param_2[0xb];
    puVar10[0x10] = param_2[0x10];
    puVar10[0xf] = uVar8;
    puVar10[0xe] = uVar13;
    puVar10[0xd] = uVar12;
    puVar10[0xc] = uVar15;
    puVar10[0xb] = uVar14;
    uVar8 = param_2[0x17];
    uVar13 = param_2[0x16];
    uVar12 = param_2[0x15];
    uVar15 = param_2[0x14];
    uVar14 = param_2[0x13];
    uVar17 = param_2[0x12];
    uVar16 = param_2[0x11];
    puVar10[0x18] = param_2[0x18];
    puVar10[0x17] = uVar8;
    puVar10[0x16] = uVar13;
    puVar10[0x15] = uVar12;
    puVar10[0x14] = uVar15;
    puVar10[0x13] = uVar14;
    puVar10[0x12] = uVar17;
    puVar10[0x11] = uVar16;
    uVar8 = param_2[0x1f];
    uVar13 = param_2[0x1e];
    uVar12 = param_2[0x1d];
    uVar15 = param_2[0x1c];
    uVar14 = param_2[0x1b];
    uVar17 = param_2[0x1a];
    uVar16 = param_2[0x19];
    puVar10[0x20] = param_2[0x20];
    puVar10[0x1f] = uVar8;
    puVar10[0x1e] = uVar13;
    puVar10[0x1d] = uVar12;
    puVar10[0x1c] = uVar15;
    puVar10[0x1b] = uVar14;
    puVar10[0x1a] = uVar17;
    puVar10[0x19] = uVar16;
    uVar12 = param_2[0x22];
    uVar8 = param_2[0x21];
    uVar14 = param_2[0x26];
    uVar13 = param_2[0x25];
    uVar16 = param_2[0x24];
    uVar15 = param_2[0x23];
    puVar10[0x27] = param_2[0x27];
    puVar10[0x26] = uVar14;
    puVar10[0x25] = uVar13;
    puVar10[0x24] = uVar16;
    puVar10[0x23] = uVar15;
    puVar10[0x22] = uVar12;
    puVar10[0x21] = uVar8;
    param_1[1] = puVar10 + 0x28;
  }
  return;
}


