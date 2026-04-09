// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dumpCurrentFunction
// Entry Point: 00efcf1c
// Size: 1232 bytes
// Signature: undefined dumpCurrentFunction(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::BytecodeBuilder::dumpCurrentFunction() const */

void Luau::BytecodeBuilder::dumpCurrentFunction(void)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  BytecodeBuilder *in_x0;
  BytecodeBuilder *pBVar7;
  int *__s;
  ulong uVar8;
  uint uVar9;
  ulong *in_x8;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  int *piVar16;
  uint local_9c;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*(uint *)(in_x0 + 0x260) & 1) == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_00efd3c8;
  }
  else {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (void *)0x0;
    pBVar7 = in_x0;
    if (((*(uint *)(in_x0 + 0x260) >> 3 & 1) != 0) &&
       (lVar11 = *(long *)(in_x0 + 0x1b0), *(long *)(in_x0 + 0x1b8) != lVar11)) {
      lVar13 = 0;
      uVar14 = 0;
      do {
        lVar11 = lVar11 + lVar13;
        uVar8 = (ulong)(*(int *)(lVar11 + 0xc) - 1);
                    /* try { // try from 00efcfd4 to 00efcfe3 has its CatchHandler @ 00efd408 */
        pBVar7 = (BytecodeBuilder *)
                 formatAppend((basic_string *)&local_80,
                              "local %d: reg %d, start pc %d line %d, end pc %d line %d\n",
                              uVar14 & 0xffffffff,(ulong)*(byte *)(lVar11 + 4),
                              (ulong)*(uint *)(lVar11 + 8),
                              (ulong)*(uint *)(*(long *)(in_x0 + 0x38) +
                                              (ulong)*(uint *)(lVar11 + 8) * 4),uVar8,
                              (ulong)*(uint *)(*(long *)(in_x0 + 0x38) + uVar8 * 4));
        lVar11 = *(long *)(in_x0 + 0x1b0);
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 0x10;
      } while (uVar14 < (ulong)(*(long *)(in_x0 + 0x1b8) - lVar11 >> 4));
    }
    lVar11 = *(long *)(in_x0 + 0x20);
    lVar13 = *(long *)(in_x0 + 0x28);
    uVar14 = lVar13 - lVar11;
    if (uVar14 == 0) {
      piVar16 = (int *)0x0;
      __s = (int *)0x0;
    }
    else {
      if ((long)uVar14 < 0) {
                    /* try { // try from 00efd3e4 to 00efd3eb has its CatchHandler @ 00efd3ec */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
                    /* try { // try from 00efd018 to 00efd01f has its CatchHandler @ 00efd3ec */
      __s = (int *)operator_new(uVar14);
      piVar16 = __s + ((long)uVar14 >> 2);
      memset(__s,0xff,uVar14 & 0xfffffffffffffffc);
      uVar8 = 0;
      do {
        uVar2 = *(uint *)(lVar11 + uVar8 * 4);
        uVar6 = uVar2 & 0xff;
        uVar9 = uVar6 - 0x17;
        iVar15 = (int)uVar8;
        if (uVar9 < 0x3a) {
          if ((1L << ((ulong)uVar9 & 0x3f) & 0x3e0005e000003ffU) != 0) {
            uVar9 = (int)uVar2 >> 0x10;
            goto LAB_00efd0a4;
          }
          if ((1L << ((ulong)uVar9 & 0x3f) & 0x1c200000000000U) == 0) goto LAB_00efd0dc;
          uVar9 = iVar15 + 2 + (uVar2 >> 0x18);
          if ((int)uVar9 < 0) goto LAB_00efd070;
LAB_00efd064:
          __s[uVar9] = 0;
          uVar6 = (uint)*(byte *)(lVar11 + uVar8 * 4);
        }
        else {
LAB_00efd0dc:
          uVar9 = uVar2 >> 0x18;
          if (uVar9 == 0 || uVar6 != 3) {
            if (uVar6 == 0x43) {
              uVar9 = iVar15 + 1 + ((int)uVar2 >> 8);
              goto joined_r0x00efd0b0;
            }
          }
          else {
LAB_00efd0a4:
            uVar9 = iVar15 + 1 + uVar9;
joined_r0x00efd0b0:
            if (-1 < (int)uVar9) goto LAB_00efd064;
          }
        }
LAB_00efd070:
        pBVar7 = (BytecodeBuilder *)FUN_00efb464(uVar6);
        uVar8 = uVar8 + ((ulong)pBVar7 & 0xffffffff);
      } while (uVar8 < (ulong)((long)uVar14 >> 2));
    }
    if ((long)piVar16 - (long)__s != 0) {
      uVar14 = (long)piVar16 - (long)__s >> 2;
      iVar15 = 0;
      piVar16 = __s;
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      do {
        if (*piVar16 == 0) {
          *piVar16 = iVar15;
          iVar15 = iVar15 + 1;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 1;
      } while (uVar14 != 0);
    }
    if (lVar13 != lVar11) {
      uVar8 = 0;
      uVar14 = 0;
      local_9c = 0xffffffff;
      do {
        while( true ) {
          puVar1 = (uint *)(lVar11 + uVar14 * 4);
          cVar3 = *(char *)puVar1;
          if (cVar3 == 'A') break;
          uVar6 = *(uint *)(in_x0 + 0x260);
          if (((uVar6 >> 4 & 1) != 0) &&
             (lVar11 = *(long *)(in_x0 + 0x210),
             uVar8 < (ulong)(*(long *)(in_x0 + 0x218) - lVar11 >> 3))) {
            lVar13 = uVar8 << 3;
            do {
              if (uVar14 != *(uint *)(lVar11 + lVar13)) break;
              pBVar7 = in_x0 + 0x229;
              if (((byte)in_x0[0x228] & 1) != 0) {
                pBVar7 = *(BytecodeBuilder **)(in_x0 + 0x238);
              }
                    /* try { // try from 00efd1e8 to 00efd1f3 has its CatchHandler @ 00efd414 */
              pBVar7 = (BytecodeBuilder *)
                       formatAppend((basic_string *)&local_80,"REMARK %s\n",
                                    pBVar7 + *(uint *)(lVar11 + lVar13 + 4));
              uVar8 = uVar8 + 1;
              lVar11 = *(long *)(in_x0 + 0x210);
              lVar13 = lVar13 + 8;
            } while (uVar8 < (ulong)(*(long *)(in_x0 + 0x218) - lVar11 >> 3));
            uVar6 = *(uint *)(in_x0 + 0x260);
          }
          if ((uVar6 >> 2 & 1) != 0) {
            uVar2 = *(uint *)(*(long *)(in_x0 + 0x38) + uVar14 * 4);
            if ((0 < (int)uVar2) && (uVar2 != local_9c)) {
              pbVar10 = (byte *)(*(long *)(in_x0 + 0x268) + (ulong)(uVar2 - 1) * 0x18);
              pbVar12 = *(byte **)(pbVar10 + 0x10);
              if ((*pbVar10 & 1) == 0) {
                pbVar12 = pbVar10 + 1;
              }
                    /* try { // try from 00efd250 to 00efd263 has its CatchHandler @ 00efd400 */
              pBVar7 = (BytecodeBuilder *)
                       formatAppend((basic_string *)&local_80,"%5d: %s\n",(ulong)uVar2,pbVar12);
              uVar6 = *(uint *)(in_x0 + 0x260);
              local_9c = uVar2;
            }
          }
          if ((uVar6 >> 1 & 1) != 0) {
                    /* try { // try from 00efd278 to 00efd2a3 has its CatchHandler @ 00efd410 */
            pBVar7 = (BytecodeBuilder *)
                     formatAppend((basic_string *)&local_80,"%d: ",
                                  (ulong)*(uint *)(*(long *)(in_x0 + 0x38) + uVar14 * 4));
          }
          if (__s[uVar14] != -1) {
            pBVar7 = (BytecodeBuilder *)formatAppend((basic_string *)&local_80,"L%d: ");
          }
          uVar2 = *puVar1;
          uVar6 = uVar2 & 0xff;
          uVar9 = uVar6 - 0x17;
          iVar15 = (int)uVar14;
          if (uVar9 < 0x3a) {
            if ((1L << ((ulong)uVar9 & 0x3f) & 0x3e0005e000003ffU) != 0) {
              uVar9 = (int)uVar2 >> 0x10;
              goto LAB_00efd2d8;
            }
            if ((1L << ((ulong)uVar9 & 0x3f) & 0x1c200000000000U) == 0) goto LAB_00efd34c;
            uVar9 = iVar15 + 2 + (uVar2 >> 0x18);
            if ((int)uVar9 < 0) goto LAB_00efd31c;
LAB_00efd2e8:
            iVar15 = __s[uVar9];
          }
          else {
LAB_00efd34c:
            uVar9 = uVar2 >> 0x18;
            if ((uVar9 == 0) || (uVar6 != 3)) {
              if (uVar6 == 0x43) {
                uVar9 = iVar15 + 1 + ((int)uVar2 >> 8);
                goto joined_r0x00efd374;
              }
            }
            else {
LAB_00efd2d8:
              uVar9 = iVar15 + 1 + uVar9;
joined_r0x00efd374:
              if (-1 < (int)uVar9) goto LAB_00efd2e8;
            }
LAB_00efd31c:
            iVar15 = -1;
          }
                    /* try { // try from 00efd320 to 00efd32b has its CatchHandler @ 00efd404 */
          dumpInstruction(pBVar7,puVar1,(basic_string *)&local_80,iVar15);
          pBVar7 = (BytecodeBuilder *)FUN_00efb464(cVar3);
          lVar11 = *(long *)(in_x0 + 0x20);
          lVar13 = *(long *)(in_x0 + 0x28);
          uVar14 = uVar14 + ((ulong)pBVar7 & 0xffffffff);
          if ((ulong)(lVar13 - lVar11 >> 2) <= uVar14) goto LAB_00efd37c;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < (ulong)(lVar13 - lVar11 >> 2));
    }
LAB_00efd37c:
    uVar5 = (ulong)local_70;
    uVar8 = uStack_78;
    uVar14 = local_80;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (void *)0x0;
    in_x8[1] = uVar8;
    *in_x8 = uVar14;
    in_x8[2] = uVar5;
    if (__s == (int *)0x0) {
      if (*(long *)(lVar4 + 0x28) != local_68) goto LAB_00efd3c8;
    }
    else {
      operator_delete(__s);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (*(long *)(lVar4 + 0x28) != local_68) {
LAB_00efd3c8:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
  return;
}


