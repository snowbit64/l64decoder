// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ee98
// Entry Point: 0078ee98
// Size: 824 bytes
// Signature: undefined FUN_0078ee98(void)


void FUN_0078ee98(char **param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *__s2;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar12 = 0.0;
  pcVar8 = *param_1;
  pcVar9 = param_1[2];
  pcVar10 = param_1[4];
  pcVar11 = param_1[6];
  __s2 = param_1[8];
  uVar1 = *(uint *)(param_1 + 10);
  fVar13 = 0.0;
  switch(*(undefined4 *)(param_1 + 0xd)) {
  case 1:
    fVar13 = (float)*(int *)(param_1 + 0xc);
    break;
  case 2:
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc));
    break;
  case 4:
    fVar13 = *(float *)(param_1 + 0xc);
    break;
  case 5:
    fVar13 = (float)(double)param_1[0xc];
  }
  switch(*(undefined4 *)(param_1 + 0xf)) {
  case 1:
    fVar12 = (float)*(int *)(param_1 + 0xe);
    break;
  case 2:
    fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xe));
    break;
  case 4:
    fVar12 = *(float *)(param_1 + 0xe);
    break;
  case 5:
    fVar12 = (float)(double)param_1[0xe];
  }
  fVar14 = 1.0;
  fVar15 = 1.0;
  switch(*(undefined4 *)(param_1 + 0x11)) {
  case 1:
    fVar15 = (float)*(int *)(param_1 + 0x10);
    break;
  case 2:
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x10));
    break;
  case 4:
    fVar15 = *(float *)(param_1 + 0x10);
    break;
  case 5:
    fVar15 = (float)(double)param_1[0x10];
  }
  switch(*(undefined4 *)(param_1 + 0x13)) {
  case 1:
    fVar14 = (float)*(int *)(param_1 + 0x12);
    goto joined_r0x0078f02c;
  case 2:
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x12));
joined_r0x0078f02c:
    if (__s2 == (char *)0x0) goto LAB_0078f10c;
    goto LAB_0078f040;
  case 4:
    fVar14 = *(float *)(param_1 + 0x12);
    break;
  case 5:
    fVar14 = (float)(double)param_1[0x12];
  }
  if (__s2 != (char *)0x0) {
LAB_0078f040:
    iVar3 = strcasecmp("normal",__s2);
    if (iVar3 == 0) {
      lVar7 = 0;
    }
    else {
      iVar3 = strcasecmp("search",__s2);
      if (iVar3 == 0) {
        lVar7 = 1;
      }
      else {
        iVar3 = strcasecmp("password",__s2);
        if (iVar3 == 0) {
          lVar7 = 2;
        }
        else {
          iVar3 = strcasecmp("url",__s2);
          if (iVar3 == 0) {
            lVar7 = 3;
          }
          else {
            iVar3 = strcasecmp("email",__s2);
            if (iVar3 == 0) {
              lVar7 = 4;
            }
            else {
              iVar3 = strcasecmp("numeric",__s2);
              if (iVar3 != 0) {
                __s2 = (char *)0x0;
                goto LAB_0078f10c;
              }
              lVar7 = 5;
            }
          }
        }
      }
    }
    __s2 = (char *)(ulong)(uint)(&DAT_005189ec)[lVar7];
  }
LAB_0078f10c:
  EngineManager::getInstance();
  plVar4 = (long *)EngineManager::getRenderWindow();
  uVar5 = (**(code **)(*plVar4 + 0x10))();
  uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar7 = EngineManager::getInstance();
  bVar2 = AndroidImeUtil::openIme
                    (pcVar8,pcVar9,pcVar10,pcVar11,(KeyboardType)__s2,uVar1,
                     (ICharacterFilter *)(lVar7 + 0xe8),false,
                     (int)(fVar13 * (float)(uVar5 & 0xffffffff)),
                     (int)(fVar12 * (float)(uVar6 & 0xffffffff)),
                     (int)(fVar15 * (float)(uVar5 & 0xffffffff)),
                     (int)(fVar14 * (float)(uVar6 & 0xffffffff)));
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar2 & 1;
  return;
}


