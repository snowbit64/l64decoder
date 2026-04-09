// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: endFunction
// Entry Point: 00ef8754
// Size: 636 bytes
// Signature: undefined __thiscall endFunction(BytecodeBuilder * this, uchar param_1, uchar param_2)


/* Luau::BytecodeBuilder::endFunction(unsigned char, unsigned char) */

void __thiscall
Luau::BytecodeBuilder::endFunction(BytecodeBuilder *this,uchar param_1,uchar param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  basic_string *pbVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar10 = (ulong)*(uint *)(this + 0x18);
  lVar11 = *(long *)this;
  pbVar8 = (basic_string *)(lVar11 + uVar10 * 0x58);
  *(uchar *)(pbVar8 + 6) = param_1;
  *(uchar *)((long)pbVar8 + 0x1a) = param_2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)pbVar8);
  writeFunction(this,pbVar8,*(uint *)(this + 0x18));
  pcVar4 = *(code **)(this + 0x280);
  uVar3 = *(ulong *)(this + 0x288) & 1;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  if ((uVar3 | (ulong)pcVar4) != 0) {
    if (uVar3 != 0) {
      pcVar4 = *(code **)(pcVar4 + *(long *)(this + ((long)*(ulong *)(this + 0x288) >> 1)));
    }
    (*pcVar4)(&local_60);
    lVar9 = lVar11 + uVar10 * 0x58;
    if ((*(byte *)(undefined8 *)(lVar9 + 0x28) & 1) != 0) {
      operator_delete(*(void **)(lVar11 + uVar10 * 0x58 + 0x38));
    }
    *(undefined8 *)(lVar9 + 0x38) = local_50;
    *(undefined8 *)(lVar9 + 0x30) = uStack_58;
    *(undefined8 *)(lVar9 + 0x28) = local_60;
  }
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x68);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x80);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x98);
  *(undefined8 *)(this + 0x1b8) = *(undefined8 *)(this + 0x1b0);
  *(undefined8 *)(this + 0x1d0) = *(undefined8 *)(this + 0x1c8);
  if (*(long *)(this + 200) != 0) {
    uVar3 = *(ulong *)(this + 0xc0);
    if (uVar3 < 0x21) {
      if (uVar3 != 0) {
        puVar7 = (undefined4 *)(*(long *)(this + 0xb8) + 0x10);
        do {
          uVar13 = *(undefined8 *)(this + 0xd8);
          uVar12 = *(undefined8 *)(this + 0xd0);
          *puVar7 = 0;
          uVar3 = uVar3 - 1;
          *(undefined8 *)(puVar7 + -2) = uVar13;
          *(undefined8 *)(puVar7 + -4) = uVar12;
          puVar7 = puVar7 + 6;
        } while (uVar3 != 0);
      }
    }
    else {
      operator_delete(*(void **)(this + 0xb8));
      *(void **)(this + 0xb8) = (void *)0x0;
      *(undefined8 *)(this + 0xc0) = 0;
    }
    *(undefined8 *)(this + 200) = 0;
  }
  if (*(long *)(this + 0xf8) != 0) {
    uVar3 = *(ulong *)(this + 0xf0);
    if (uVar3 < 0x21) {
      if (uVar3 != 0) {
        puVar5 = *(undefined8 **)(this + 0xe8);
        do {
          uVar12 = *(undefined8 *)(this + 0x100);
          uVar3 = uVar3 - 1;
          puVar5[1] = *(undefined8 *)(this + 0x108);
          *puVar5 = uVar12;
          uVar14 = *(undefined8 *)(this + 0x130);
          uVar13 = *(undefined8 *)(this + 0x148);
          uVar12 = *(undefined8 *)(this + 0x140);
          uVar18 = *(undefined8 *)(this + 0x118);
          uVar17 = *(undefined8 *)(this + 0x110);
          uVar16 = *(undefined8 *)(this + 0x128);
          uVar15 = *(undefined8 *)(this + 0x120);
          puVar5[7] = *(undefined8 *)(this + 0x138);
          puVar5[6] = uVar14;
          puVar5[9] = uVar13;
          puVar5[8] = uVar12;
          puVar5[3] = uVar18;
          puVar5[2] = uVar17;
          puVar5[5] = uVar16;
          puVar5[4] = uVar15;
          uVar14 = *(undefined8 *)(this + 0x160);
          uVar13 = *(undefined8 *)(this + 0x178);
          uVar12 = *(undefined8 *)(this + 0x170);
          uVar16 = *(undefined8 *)(this + 0x158);
          uVar15 = *(undefined8 *)(this + 0x150);
          uVar1 = *(undefined4 *)(this + 0x180);
          puVar5[0xd] = *(undefined8 *)(this + 0x168);
          puVar5[0xc] = uVar14;
          puVar5[0xf] = uVar13;
          puVar5[0xe] = uVar12;
          puVar5[0xb] = uVar16;
          puVar5[10] = uVar15;
          *(undefined4 *)(puVar5 + 0x10) = uVar1;
          *(undefined4 *)((long)puVar5 + 0x84) = 0;
          puVar5 = puVar5 + 0x11;
        } while (uVar3 != 0);
      }
    }
    else {
      operator_delete(*(void **)(this + 0xe8));
      *(void **)(this + 0xe8) = (void *)0x0;
      *(undefined8 *)(this + 0xf0) = 0;
    }
    *(undefined8 *)(this + 0xf8) = 0;
  }
  if (*(long *)(this + 0x198) != 0) {
    uVar3 = *(ulong *)(this + 400);
    if (uVar3 < 0x21) {
      if (uVar3 != 0) {
        puVar6 = (undefined2 *)(*(long *)(this + 0x188) + 4);
        do {
          uVar1 = *(undefined4 *)(this + 0x1a0);
          *puVar6 = 0;
          uVar3 = uVar3 - 1;
          *(undefined4 *)(puVar6 + -2) = uVar1;
          puVar6 = puVar6 + 4;
        } while (uVar3 != 0);
      }
    }
    else {
      operator_delete(*(void **)(this + 0x188));
      *(void **)(this + 0x188) = (void *)0x0;
      *(undefined8 *)(this + 400) = 0;
    }
    *(undefined8 *)(this + 0x198) = 0;
  }
  *(undefined8 *)(this + 0x218) = *(undefined8 *)(this + 0x210);
  if (((byte)this[0x228] & 1) == 0) {
    *(undefined2 *)(this + 0x228) = 0;
  }
  else {
    **(undefined **)(this + 0x238) = 0;
    *(undefined8 *)(this + 0x230) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


