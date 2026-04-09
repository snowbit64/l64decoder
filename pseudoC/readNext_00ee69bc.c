// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readNext
// Entry Point: 00ee69bc
// Size: 1664 bytes
// Signature: undefined readNext(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Lexer::readNext() */

void Luau::Lexer::readNext(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  long *in_x0;
  uint uVar7;
  uint uVar8;
  uint *in_x8;
  long lVar9;
  int iVar10;
  long *plVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined auVar17 [12];
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  plVar11 = in_x0 + 2;
  uVar8 = *(uint *)plVar11;
  uVar7 = *(uint *)((long)in_x0 + 0x14);
  iVar2 = *(int *)(in_x0 + 3);
  uVar14 = in_x0[1];
  iVar10 = uVar8 - iVar2;
  local_40 = CONCAT44(iVar10,uVar7);
  if (uVar14 <= uVar8) {
switchD_00ee6a30_caseD_0:
    *in_x8 = 0;
    *(undefined8 *)(in_x8 + 1) = local_40;
    in_x8[5] = 0;
    *(undefined8 *)(in_x8 + 3) = local_40;
    goto LAB_00ee6e70;
  }
  lVar9 = *in_x0;
  bVar4 = *(byte *)(lVar9 + (ulong)uVar8);
  uVar13 = (uint)bVar4;
  switch(bVar4) {
  case 0:
    goto switchD_00ee6a30_caseD_0;
  default:
    if (uVar13 - 0x30 < 10) {
LAB_00ee6e44:
      readNumber((Position *)in_x0,(uint)&local_40);
      goto LAB_00ee6e74;
    }
    uVar15 = (uint)bVar4;
    if (((uVar15 | 0x20) - 0x61 < 0x1a) || (uVar15 == 0x5f)) {
      auVar17 = readName();
      iVar2 = *(int *)(in_x0 + 2);
      uVar3 = *(undefined4 *)((long)in_x0 + 0x14);
      iVar10 = *(int *)(in_x0 + 3);
      in_x8[5] = 0;
      *in_x8 = auVar17._8_4_;
      *(long *)(in_x8 + 6) = auVar17._0_8_;
      *(undefined8 *)(in_x8 + 1) = local_40;
      *(ulong *)(in_x8 + 3) = CONCAT44(iVar2 - iVar10,uVar3);
      goto LAB_00ee6e74;
    }
    if ((char)bVar4 < '\0') {
      readUtf8Error();
      goto LAB_00ee6e74;
    }
    if (uVar15 == 10) {
      *(uint *)((long)in_x0 + 0x14) = uVar7 + 1;
      *(uint *)(in_x0 + 3) = uVar8 + 1;
    }
    *(uint *)plVar11 = uVar8 + 1;
    *(undefined8 *)(in_x8 + 1) = local_40;
    *in_x8 = uVar13;
    in_x8[5] = 0;
    uVar8 = iVar10 + 1;
    in_x8[3] = uVar7;
    goto LAB_00ee701c;
  case 0x22:
  case 0x27:
    readQuotedString();
    goto LAB_00ee6e74;
  case 0x23:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x3b:
  case 0x5d:
    *in_x8 = uVar13;
    uVar13 = iVar10 + 1;
    *(undefined8 *)(in_x8 + 1) = local_40;
    *(uint *)plVar11 = uVar8 + 1;
    goto LAB_00ee6e68;
  case 0x25:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar14 <= uVar13) || (*(char *)(lVar9 + (ulong)uVar13) != '=')) {
      uVar8 = 0x25;
      break;
    }
    uVar13 = 0x111;
LAB_00ee6d68:
    uVar8 = uVar8 + 2;
    *(undefined8 *)(in_x8 + 1) = local_40;
    uVar15 = iVar10 + 2;
    goto LAB_00ee6d70;
  case 0x2a:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar13 < uVar14) && (*(char *)(lVar9 + (ulong)uVar13) == '=')) {
      uVar13 = 0x10f;
      goto LAB_00ee6d68;
    }
    uVar8 = 0x2a;
    break;
  case 0x2b:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar13 < uVar14) && (*(char *)(lVar9 + (ulong)uVar13) == '=')) {
      uVar13 = 0x10d;
      goto LAB_00ee6d68;
    }
    uVar8 = 0x2b;
    break;
  case 0x2d:
    uVar13 = uVar8 + 1;
    uVar16 = (ulong)uVar13;
    if (uVar14 <= uVar16) {
LAB_00ee6e10:
      uVar8 = 0x2d;
      *(uint *)plVar11 = uVar13;
      break;
    }
    cVar5 = *(char *)(lVar9 + uVar16);
    if (cVar5 == '-') {
      readCommentBody();
      goto LAB_00ee6e74;
    }
    if (cVar5 == '=') {
      *(uint *)plVar11 = uVar13;
      if (*(char *)(lVar9 + uVar16) == '\n') {
        *(uint *)((long)in_x0 + 0x14) = uVar7 + 1;
        *(uint *)(in_x0 + 3) = uVar8 + 2;
      }
      *(uint *)plVar11 = uVar8 + 2;
      *(undefined8 *)(in_x8 + 1) = local_40;
      in_x8[5] = 0;
      uVar8 = iVar10 + 2;
      in_x8[3] = uVar7;
      *in_x8 = 0x10e;
    }
    else {
      if (cVar5 != '>') goto LAB_00ee6e10;
      *(uint *)plVar11 = uVar13;
      if (*(char *)(lVar9 + uVar16) == '\n') {
        *(uint *)((long)in_x0 + 0x14) = uVar7 + 1;
        *(uint *)(in_x0 + 3) = uVar8 + 2;
      }
      *(uint *)plVar11 = uVar8 + 2;
      *(undefined8 *)(in_x8 + 1) = local_40;
      in_x8[5] = 0;
      *in_x8 = 0x107;
      uVar8 = iVar10 + 2;
      in_x8[3] = uVar7;
    }
LAB_00ee701c:
    in_x8[4] = uVar8;
    goto LAB_00ee6e70;
  case 0x2e:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if (uVar14 <= uVar13) {
LAB_00ee6e58:
      uVar8 = 0x2e;
      break;
    }
    uVar13 = (uint)*(byte *)(lVar9 + (ulong)uVar13);
    if (uVar13 != 0x2e) {
      if (uVar13 - 0x30 < 10) goto LAB_00ee6e44;
      goto LAB_00ee6e58;
    }
    uVar13 = uVar8 + 2;
    *(uint *)plVar11 = uVar13;
    if (uVar13 < uVar14) {
      cVar5 = *(char *)(lVar9 + (ulong)uVar13);
      if (cVar5 == '=') {
        uVar13 = 0x113;
      }
      else {
        if (cVar5 != '.') goto LAB_00ee6efc;
        uVar13 = 0x106;
      }
      uVar8 = uVar8 + 3;
      *(undefined8 *)(in_x8 + 1) = local_40;
      uVar15 = iVar10 + 3;
      goto LAB_00ee6d70;
    }
LAB_00ee6efc:
    uVar8 = 0x105;
    uVar13 = iVar10 + 2;
    goto LAB_00ee6e60;
  case 0x2f:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar13 < uVar14) && (*(char *)(lVar9 + (ulong)uVar13) == '=')) {
      uVar13 = 0x110;
      goto LAB_00ee6d68;
    }
    uVar8 = 0x2f;
    break;
  case 0x3a:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar13 < uVar14) && (*(char *)(lVar9 + (ulong)uVar13) == ':')) {
      uVar13 = 0x108;
      goto LAB_00ee6d68;
    }
    uVar8 = 0x3a;
    break;
  case 0x3c:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar13 < uVar14) && (*(char *)(lVar9 + (ulong)uVar13) == '=')) {
      uVar13 = 0x102;
      goto LAB_00ee6d68;
    }
    uVar8 = 0x3c;
    break;
  case 0x3d:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar13 < uVar14) && (*(char *)(lVar9 + (ulong)uVar13) == '=')) {
      uVar13 = 0x101;
      goto LAB_00ee6d68;
    }
    uVar8 = 0x3d;
    break;
  case 0x3e:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar13 < uVar14) && (*(char *)(lVar9 + (ulong)uVar13) == '=')) {
      uVar13 = 0x103;
      goto LAB_00ee6d68;
    }
    uVar8 = 0x3e;
    break;
  case 0x5b:
    uVar16 = (ulong)(uVar8 + 1);
    *(uint *)plVar11 = uVar8 + 1;
    if (uVar16 < uVar14) {
      if (*(char *)(lVar9 + uVar16) == '=') {
        uVar15 = 1;
        do {
          uVar13 = uVar15;
          uVar1 = uVar8 + uVar13 + 1;
          *(uint *)plVar11 = uVar1;
          if (uVar14 <= uVar1) {
            uVar16 = (ulong)(uVar8 + uVar13 + 1);
            goto LAB_00ee6f10;
          }
          uVar15 = uVar13 + 1;
        } while (*(char *)(lVar9 + (ulong)uVar1) == '=');
        uVar16 = (ulong)(uVar8 + uVar13 + 1);
      }
      else {
        uVar13 = 0;
      }
      uVar8 = -(uint)(*(char *)(lVar9 + uVar16) != '[');
    }
    else {
      uVar13 = 0;
LAB_00ee6f10:
      uVar8 = 0xffffffff;
    }
    uVar13 = uVar13 ^ uVar8;
    if (-1 < (int)uVar13) {
      readLongString((Position *)in_x0,(int)&local_40,uVar13,0x114);
      goto LAB_00ee6e74;
    }
    if (uVar13 != 0xffffffff) {
      *(undefined8 *)(in_x8 + 1) = local_40;
      in_x8[5] = 0;
      *in_x8 = 0x11a;
      *(undefined8 *)(in_x8 + 6) = 0;
      *(ulong *)(in_x8 + 3) = CONCAT44((int)uVar16 - iVar2,uVar7);
      goto LAB_00ee6e74;
    }
    uVar8 = 0x5b;
    break;
  case 0x5e:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar13 < uVar14) && (*(char *)(lVar9 + (ulong)uVar13) == '=')) {
      uVar13 = 0x112;
      goto LAB_00ee6d68;
    }
    uVar8 = 0x5e;
    break;
  case 0x60:
    if (FFlag::LuauInterpolatedStringBaseSupport != '\0') {
      readInterpolatedStringBegin();
      goto LAB_00ee6e74;
    }
    uVar8 = uVar8 + 1;
    uVar13 = 0x60;
    *(undefined8 *)(in_x8 + 1) = local_40;
    uVar15 = iVar10 + 1;
LAB_00ee6d70:
    *(uint *)plVar11 = uVar8;
    *in_x8 = uVar13;
    in_x8[3] = uVar7;
    in_x8[4] = uVar15;
    goto LAB_00ee6e6c;
  case 0x7b:
    *(uint *)(in_x0 + 2) = uVar8 + 1;
    if (in_x0[0xc] != in_x0[0xd]) {
      local_44 = 1;
      FUN_00ee7d70(in_x0 + 0xc,&local_44);
      uVar7 = (uint)local_40;
      iVar10 = (int)((ulong)local_40 >> 0x20);
    }
    uVar8 = 0x7b;
    break;
  case 0x7d:
    *(uint *)(in_x0 + 2) = uVar8 + 1;
    if ((in_x0[0xc] != in_x0[0xd]) &&
       (piVar12 = (int *)(in_x0[0xd] + -4), iVar2 = *piVar12, in_x0[0xd] = (long)piVar12, iVar2 == 0
       )) {
      readInterpolatedStringSection();
      goto LAB_00ee6e74;
    }
    uVar8 = 0x7d;
    break;
  case 0x7e:
    uVar13 = uVar8 + 1;
    *(uint *)plVar11 = uVar13;
    if ((uVar13 < uVar14) && (*(char *)(lVar9 + (ulong)uVar13) == '=')) {
      uVar13 = 0x104;
      goto LAB_00ee6d68;
    }
    uVar8 = 0x7e;
  }
  uVar13 = iVar10 + 1;
LAB_00ee6e60:
  *(undefined8 *)(in_x8 + 1) = local_40;
  *in_x8 = uVar8;
LAB_00ee6e68:
  in_x8[3] = uVar7;
  in_x8[4] = uVar13;
LAB_00ee6e6c:
  in_x8[5] = 0;
LAB_00ee6e70:
  *(undefined8 *)(in_x8 + 6) = 0;
LAB_00ee6e74:
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


