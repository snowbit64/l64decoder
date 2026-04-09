// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readLongString
// Entry Point: 00ee74b4
// Size: 480 bytes
// Signature: undefined __cdecl readLongString(Position * param_1, int param_2, Type param_3, Type param_4)


/* Luau::Lexer::readLongString(Luau::Position const&, int, Luau::Lexeme::Type, Luau::Lexeme::Type)
    */

void Luau::Lexer::readLongString(Position *param_1,int param_2,Type param_3,Type param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  Type in_w4;
  Type *in_x8;
  long lVar4;
  Type TVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  lVar4 = *(long *)param_1;
  if (*(char *)(lVar4 + (ulong)uVar2) == '\n') {
    uVar14 = uVar2 + 1;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(uint *)(param_1 + 0x18) = uVar14;
    uVar9 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)uVar14;
    *(uint *)(param_1 + 0x10) = uVar14;
    if (uVar6 < uVar9) {
LAB_00ee7538:
      uVar13 = (ulong)(uVar2 + 1);
      uVar15 = uVar6;
      do {
        cVar3 = *(char *)(lVar4 + uVar15);
        iVar11 = (int)uVar13;
        if (cVar3 == '\n') {
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x18) = iVar11 + 1;
LAB_00ee7554:
          uVar13 = (ulong)(iVar11 + 1U);
          *(uint *)(param_1 + 0x10) = iVar11 + 1U;
        }
        else {
          if (cVar3 != ']') {
            if (cVar3 != '\0') goto LAB_00ee7554;
            break;
          }
          uVar13 = (ulong)(iVar11 + 1U);
          *(uint *)(param_1 + 0x10) = iVar11 + 1U;
          if (uVar13 < uVar9) {
            if (*(char *)(lVar4 + uVar13) == '=') {
              uVar1 = 1;
              do {
                uVar14 = uVar1;
                uVar1 = iVar11 + uVar14 + 1;
                uVar13 = (ulong)uVar1;
                *(uint *)(param_1 + 0x10) = uVar1;
                if (uVar9 <= uVar13) {
                  uVar14 = ~uVar14;
                  goto joined_r0x00ee7634;
                }
                uVar1 = uVar14 + 1;
              } while (*(char *)(lVar4 + uVar13) == '=');
              uVar13 = (ulong)(iVar11 + uVar14 + 1);
              if (*(char *)(lVar4 + uVar13) != ']') {
                uVar14 = ~uVar14;
              }
            }
            else {
              uVar14 = 0;
              if (*(char *)(lVar4 + uVar13) != ']') {
                uVar14 = 0xffffffff;
              }
            }
joined_r0x00ee7634:
            if (uVar14 == param_3) {
LAB_00ee7638:
              if (*(char *)(lVar4 + uVar13) == '\n') {
                iVar11 = (int)uVar13 + 1;
                iVar8 = *(int *)(param_1 + 0x14) + 1;
                *(int *)(param_1 + 0x14) = iVar8;
                *(int *)(param_1 + 0x18) = iVar11;
              }
              else {
                iVar8 = *(int *)(param_1 + 0x14);
                iVar11 = *(int *)(param_1 + 0x18);
              }
              iVar12 = (int)uVar13 + 1;
              lVar4 = lVar4 + uVar6;
              TVar5 = (iVar12 - (uVar2 + 1 + param_3)) - 2;
              uVar10 = CONCAT44(iVar12 - iVar11,iVar8);
              *(int *)(param_1 + 0x10) = iVar12;
              goto LAB_00ee7504;
            }
          }
          else if (param_3 == 0xffffffff) goto LAB_00ee7638;
        }
        iVar11 = (int)uVar13;
        uVar15 = uVar13;
      } while (uVar13 < uVar9);
      goto LAB_00ee74f0;
    }
  }
  else {
    uVar9 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(uVar2 + 1);
    *(uint *)(param_1 + 0x10) = uVar2 + 1;
    if (uVar6 < uVar9) goto LAB_00ee7538;
  }
  iVar11 = uVar2 + 1;
LAB_00ee74f0:
  TVar5 = 0;
  lVar4 = 0;
  uVar10 = CONCAT44(iVar11 - *(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
  param_4 = in_w4;
LAB_00ee7504:
  uVar7 = *(undefined8 *)(ulong)(uint)param_2;
  *in_x8 = param_4;
  *(undefined8 *)(in_x8 + 3) = uVar10;
  in_x8[5] = TVar5;
  *(undefined8 *)(in_x8 + 1) = uVar7;
  *(long *)(in_x8 + 6) = lVar4;
  return;
}


