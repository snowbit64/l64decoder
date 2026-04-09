// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5734
// Entry Point: 007b5734
// Size: 708 bytes
// Signature: undefined FUN_007b5734(void)


RenderOverlay * FUN_007b5734(uint *param_1)

{
  bool bVar1;
  bool bVar2;
  EntityRegistryManager *this;
  Camera *pCVar3;
  long lVar4;
  RenderOverlay *this_00;
  Camera *pCVar5;
  TextureOverlayRenderer *pTVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = *param_1;
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pCVar3 = (Camera *)EntityRegistryManager::getEntityById(this,uVar7);
  lVar4 = EngineManager::getInstance();
  pCVar5 = pCVar3;
  if ((pCVar3 != (Camera *)0x0) && (pCVar5 = (Camera *)0x0, ((byte)pCVar3[0x11] & 0x80) != 0)) {
    pCVar5 = pCVar3;
  }
  bVar1 = false;
  pTVar6 = *(TextureOverlayRenderer **)(lVar4 + 0x100);
  switch(param_1[0x1e]) {
  case 1:
  case 2:
    bVar1 = param_1[0x1c] == 0;
    break;
  case 3:
    bVar1 = *(char *)(param_1 + 0x1c) == '\0';
    break;
  case 4:
    bVar1 = (float)param_1[0x1c] == 0.0;
    break;
  case 5:
    bVar1 = *(double *)(param_1 + 0x1c) == 0.0;
    break;
  default:
    goto switchD_007b57ac_caseD_6;
  case 7:
  case 8:
    lVar4 = *(long *)(param_1 + 0x1c);
LAB_007b57f4:
    bVar1 = lVar4 == 0;
    break;
  case 0xd:
    if (*(long **)(param_1 + 0x1c) != (long *)0x0) {
      lVar4 = **(long **)(param_1 + 0x1c);
      goto LAB_007b57f4;
    }
    bVar1 = false;
    goto switchD_007b57ac_caseD_6;
  }
  bVar1 = !bVar1;
switchD_007b57ac_caseD_6:
  uVar7 = 0;
  switch(param_1[0x22]) {
  case 1:
  case 2:
    uVar7 = param_1[0x20];
    break;
  case 4:
    uVar7 = (uint)(float)param_1[0x20];
    break;
  case 5:
    uVar7 = (uint)*(double *)(param_1 + 0x20);
  }
  bVar2 = false;
  switch(param_1[0x26]) {
  case 1:
  case 2:
    bVar2 = param_1[0x24] == 0;
    break;
  case 3:
    bVar2 = *(char *)(param_1 + 0x24) == '\0';
    break;
  case 4:
    bVar2 = (float)param_1[0x24] == 0.0;
    break;
  case 5:
    bVar2 = *(double *)(param_1 + 0x24) == 0.0;
    break;
  default:
    goto switchD_007b586c_caseD_6;
  case 7:
  case 8:
    lVar4 = *(long *)(param_1 + 0x24);
    goto LAB_007b58b4;
  case 0xd:
    if (*(long **)(param_1 + 0x24) == (long *)0x0) {
      bVar2 = false;
      goto switchD_007b586c_caseD_6;
    }
    lVar4 = **(long **)(param_1 + 0x24);
LAB_007b58b4:
    bVar2 = lVar4 == 0;
  }
  bVar2 = !bVar2;
switchD_007b586c_caseD_6:
  uVar8 = 0;
  switch(param_1[0x2a]) {
  case 1:
  case 2:
    uVar8 = param_1[0x28];
    break;
  case 4:
    uVar8 = (uint)(float)param_1[0x28];
    break;
  case 5:
    uVar8 = (uint)*(double *)(param_1 + 0x28);
  }
  uVar9 = 0;
  switch(param_1[0x2e]) {
  case 1:
  case 2:
    uVar9 = param_1[0x2c];
    break;
  case 4:
    uVar9 = (uint)(float)param_1[0x2c];
    break;
  case 5:
    uVar9 = (uint)*(double *)(param_1 + 0x2c);
  }
  this_00 = (RenderOverlay *)operator_new(0xf0);
                    /* try { // try from 007b5970 to 007b59c3 has its CatchHandler @ 007b59f8 */
  RenderOverlay::RenderOverlay
            (this_00,pCVar5,pTVar6,(float)param_1[4],param_1[8],param_1[0xc],
             *(bool *)(param_1 + 0x10),param_1[0x14],param_1[0x18],uVar7,bVar2,uVar8,uVar9,bVar1,0.1
             ,0.1,0.2,0.2,0.0,0.0,1.0,1.0);
  return this_00;
}


