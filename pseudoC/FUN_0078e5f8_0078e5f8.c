// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078e5f8
// Entry Point: 0078e5f8
// Size: 168 bytes
// Signature: undefined FUN_0078e5f8(void)


void FUN_0078e5f8(float *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = EngineManager::getInstance();
  bVar1 = true;
  switch(param_1[6]) {
  case 1.401298e-45:
  case 2.802597e-45:
    bVar1 = param_1[4] == 0.0;
    break;
  case 4.203895e-45:
    bVar1 = *(char *)(param_1 + 4) == '\0';
    break;
  case 5.605194e-45:
    bVar1 = param_1[4] == 0.0;
    break;
  case 7.006492e-45:
    bVar1 = *(double *)(param_1 + 4) == 0.0;
    break;
  default:
    goto switchD_0078e63c_caseD_6;
  case 9.809089e-45:
  case 1.121039e-44:
    lVar3 = *(long *)(param_1 + 4);
    goto LAB_0078e684;
  case 1.821688e-44:
    if (*(long **)(param_1 + 4) == (long *)0x0) {
      bVar1 = false;
      goto switchD_0078e63c_caseD_6;
    }
    lVar3 = **(long **)(param_1 + 4);
LAB_0078e684:
    bVar1 = lVar3 == 0;
  }
  bVar1 = !bVar1;
switchD_0078e63c_caseD_6:
  FontOverlayRenderer::setWrapWidth(*(FontOverlayRenderer **)(lVar2 + 0xf8),*param_1,bVar1);
  return;
}


