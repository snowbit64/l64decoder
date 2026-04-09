// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readCommentBody
// Entry Point: 00ee71e8
// Size: 520 bytes
// Signature: undefined readCommentBody(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::readCommentBody() */

void Luau::Lexer::readCommentBody(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long *in_x0;
  Type TVar4;
  undefined4 *in_x8;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar12 = *(uint *)(in_x0 + 2);
  iVar1 = *(int *)((long)in_x0 + 0x14);
  uVar6 = *(uint *)(in_x0 + 3);
  lVar5 = *in_x0;
  local_30 = CONCAT44(uVar12 - uVar6,iVar1);
  if (*(char *)(lVar5 + (ulong)uVar12) == '\n') {
    uVar6 = uVar12 + 1;
    iVar1 = iVar1 + 1;
    *(int *)((long)in_x0 + 0x14) = iVar1;
    *(uint *)(in_x0 + 3) = uVar6;
    *(uint *)(in_x0 + 2) = uVar6;
    cVar2 = *(char *)(lVar5 + (ulong)uVar6);
  }
  else {
    *(uint *)(in_x0 + 2) = uVar12 + 1;
    cVar2 = *(char *)(lVar5 + (ulong)(uVar12 + 1));
  }
  if (cVar2 == '\n') {
    uVar6 = uVar12 + 2;
    iVar1 = iVar1 + 1;
    *(int *)((long)in_x0 + 0x14) = iVar1;
    *(uint *)(in_x0 + 3) = uVar6;
  }
  uVar7 = uVar12 + 2;
  uVar8 = (ulong)uVar7;
  uVar9 = in_x0[1];
  *(uint *)(in_x0 + 2) = uVar7;
  uVar10 = uVar8;
  if ((uVar8 < uVar9) && (*(char *)(lVar5 + uVar8) == '[')) {
    uVar10 = (ulong)(uVar12 + 3);
    *(uint *)(in_x0 + 2) = uVar12 + 3;
    if (uVar10 < uVar9) {
      if (*(char *)(lVar5 + uVar10) == '=') {
        uVar12 = 1;
        do {
          uVar11 = uVar12;
          uVar12 = uVar7 + uVar11 + 1;
          uVar10 = (ulong)uVar12;
          *(uint *)(in_x0 + 2) = uVar12;
          if (uVar9 <= uVar10) {
            TVar4 = uVar11 ^ 0xffffffff;
            if ((int)TVar4 < 0) goto LAB_00ee735c;
            goto LAB_00ee7338;
          }
          uVar12 = uVar11 + 1;
        } while (*(char *)(lVar5 + uVar10) == '=');
        uVar10 = (ulong)(uVar7 + uVar11 + 1);
        TVar4 = uVar11 ^ -(uint)(*(char *)(lVar5 + uVar10) != '[');
        if (-1 < (int)TVar4) {
LAB_00ee7338:
          readLongString((Position *)in_x0,(int)&local_30,TVar4,0x119);
          goto LAB_00ee73cc;
        }
      }
      else {
        uVar12 = (uint)(*(char *)(lVar5 + uVar10) != '[');
        TVar4 = -uVar12;
        if (uVar12 == 0) goto LAB_00ee7338;
      }
    }
  }
LAB_00ee735c:
  uVar12 = (uint)uVar10;
  while ((uVar10 < uVar9 &&
         (uVar12 = (uint)uVar10,
         0xd < *(byte *)(lVar5 + uVar10) ||
         (1 << (ulong)(*(byte *)(lVar5 + uVar10) & 0x1f) & 0x2401U) == 0))) {
    uVar12 = uVar12 + 1;
    uVar10 = (ulong)uVar12;
    *(uint *)(in_x0 + 2) = uVar12;
  }
  *(undefined8 *)(in_x8 + 1) = local_30;
  *in_x8 = 0x118;
  in_x8[5] = uVar12 - uVar7;
  *(ulong *)(in_x8 + 3) = CONCAT44(uVar12 - uVar6,iVar1);
  *(ulong *)(in_x8 + 6) = lVar5 + uVar8;
LAB_00ee73cc:
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


