// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f27d58
// Entry Point: 00f27d58
// Size: 712 bytes
// Signature: undefined FUN_00f27d58(void)


char * FUN_00f27d58(undefined8 param_1,uint *param_2,uint **param_3)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined uVar6;
  undefined4 uVar7;
  uint *puVar8;
  char *pcVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *local_38;
  
  *(undefined *)((long)param_3 + 0x33) = 0;
  param_3[4] = (uint *)0x0;
  param_3[5] = (uint *)0x0;
  *(undefined2 *)(param_3 + 6) = 0;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  *param_3 = param_2;
  puVar16 = param_2 + 1;
  uVar11 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar11 = *(ulong *)(param_2 + 1);
    puVar16 = param_2 + 3;
    puVar1 = (uint *)(uVar11 + (long)puVar16);
  }
  else {
    puVar1 = (uint *)((long)puVar16 + uVar11);
  }
  if (uVar11 == 0) {
    pcVar9 = (char *)0x0;
  }
  else if (*puVar16 == 0) {
    bVar4 = *(byte *)(puVar16 + 1);
    if ((bVar4 & 0xfd) == 1) {
      puVar16 = (uint *)((long)puVar16 + 5);
      puVar8 = puVar16;
      do {
        local_38 = (uint *)((long)puVar8 + 1);
        cVar2 = *(char *)puVar8;
        puVar8 = local_38;
      } while (cVar2 != '\0');
      uVar7 = FUN_00f29cf0(&local_38,puVar1);
      uVar11 = 0;
      uVar12 = 0;
      *(undefined4 *)(param_3 + 5) = uVar7;
      puVar8 = local_38;
      puVar13 = local_38;
      do {
        puVar10 = puVar8;
        if (puVar13 == puVar1) {
          fprintf((FILE *)0x2249f40,"libunwind: %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)0x2249f40);
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar14 = (uint *)((long)puVar13 + 1);
        bVar3 = *(byte *)puVar13;
        puVar8 = (uint *)((long)puVar10 + 1);
        uVar5 = uVar11 & 0x3f;
        uVar11 = uVar11 + 7;
        uVar12 = ((ulong)bVar3 & 0x7f) << uVar5 | uVar12;
        puVar13 = puVar14;
      } while ((char)bVar3 < '\0');
      uVar15 = (uint)(-1L << (uVar11 & 0x3f));
      if (((int)uVar11 - 7U < 0x39 & bVar3 >> 6) == 0) {
        uVar15 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar12 | uVar15;
      if (bVar4 == 1) {
        local_38 = (uint *)((long)puVar10 + 2);
        *(undefined *)((long)param_3 + 0x32) = *(undefined *)puVar14;
        cVar2 = *(char *)puVar16;
      }
      else {
        local_38 = puVar8;
        uVar6 = FUN_00f29cf0(&local_38,puVar1);
        *(undefined *)((long)param_3 + 0x32) = uVar6;
        cVar2 = *(char *)puVar16;
      }
      if (cVar2 == 'z') {
        FUN_00f29cf0(&local_38,puVar1);
LAB_00f27f00:
        switch(*(char *)puVar16) {
        case 'B':
          *(undefined *)((long)param_3 + 0x33) = 1;
          break;
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'M':
        case 'N':
        case 'O':
        case 'Q':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
          break;
        case 'L':
          puVar16 = (uint *)((long)puVar16 + 1);
          *(undefined *)((long)param_3 + 0x19) = *(undefined *)local_38;
          local_38 = (uint *)((long)local_38 + 1);
          goto LAB_00f27f00;
        case 'P':
          uVar6 = *(undefined *)local_38;
          *(undefined *)((long)param_3 + 0x1a) = uVar6;
          *(char *)((long)param_3 + 0x1b) = (char)(uint *)((long)local_38 + 1) - (char)param_2;
          local_38 = (uint *)((long)local_38 + 1);
          puVar8 = (uint *)FUN_00f299dc(param_1,&local_38,puVar1,uVar6,0);
          param_3[4] = puVar8;
          puVar16 = (uint *)((long)puVar16 + 1);
          goto LAB_00f27f00;
        case 'R':
          puVar16 = (uint *)((long)puVar16 + 1);
          *(undefined *)(param_3 + 3) = *(undefined *)local_38;
          local_38 = (uint *)((long)local_38 + 1);
          goto LAB_00f27f00;
        case 'S':
          *(undefined *)(param_3 + 6) = 1;
          puVar16 = (uint *)((long)puVar16 + 1);
          goto LAB_00f27f00;
        case 'z':
          goto code_r0x00f27fa8;
        default:
          if (*(char *)puVar16 == '\0') goto LAB_00f27fb8;
        }
        puVar16 = (uint *)((long)puVar16 + 1);
        goto LAB_00f27f00;
      }
LAB_00f27fb8:
      pcVar9 = (char *)0x0;
      param_3[1] = (uint *)((long)puVar1 - (long)*param_3);
      param_3[2] = local_38;
    }
    else {
      pcVar9 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar9 = "CIE ID is not zero";
  }
  return pcVar9;
code_r0x00f27fa8:
  *(undefined *)((long)param_3 + 0x31) = 1;
  puVar16 = (uint *)((long)puVar16 + 1);
  goto LAB_00f27f00;
}


