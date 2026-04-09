// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initParametersFromHardwareScalability
// Entry Point: 00a3d0fc
// Size: 536 bytes
// Signature: undefined __cdecl initParametersFromHardwareScalability(IRenderDevice * param_1, uint param_2, uint param_3, uint param_4, uint param_5, float * param_6, PIXEL_FORMAT param_7, bool param_8, PIXEL_FORMAT param_9, bool param_10, char * param_11)


/* ScreenSpaceProcessor::initParametersFromHardwareScalability(IRenderDevice*, unsigned int,
   unsigned int, unsigned int, unsigned int, float const*, PixelFormat::PIXEL_FORMAT, bool,
   PixelFormat::PIXEL_FORMAT, bool, char const*) */

uint ScreenSpaceProcessor::initParametersFromHardwareScalability
               (IRenderDevice *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
               float *param_6,PIXEL_FORMAT param_7,bool param_8,PIXEL_FORMAT param_9,bool param_10,
               char *param_11)

{
  undefined uVar1;
  uint uVar2;
  undefined4 uVar3;
  FIDELITY_FX_SR FVar4;
  XESS_QUALITY XVar5;
  FIDELITY_FX_SR_20 FVar6;
  QUALCOMM_SGSR_QUALITY QVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  POST_PROCESS_ANTI_ALIASING PVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  float extraout_s0;
  undefined3 in_stack_00000009;
  undefined4 in_stack_fffffffffffffe80;
  undefined4 in_stack_fffffffffffffee0;
  uint in_stack_ffffffffffffff18;
  undefined4 in_stack_ffffffffffffff24;
  DLSS_QUALITY local_c0;
  
  plVar18 = (long *)(ulong)param_2;
  lVar16 = EngineManager::getInstance();
  uVar15 = *(uint *)(lVar16 + 0x244);
  cVar9 = *(char *)(lVar16 + 0x248);
  cVar10 = *(char *)(lVar16 + 0x250);
  uVar2 = *(uint *)(lVar16 + 0x1b0);
  cVar11 = *(char *)(lVar16 + 0x251);
  cVar12 = *(char *)(lVar16 + 0x252);
  uVar3 = *(undefined4 *)(lVar16 + 0x240);
  uVar1 = (undefined)*(undefined4 *)(lVar16 + 0x24c);
  PVar13 = HardwareScalability::getMSAA();
  lVar17 = (**(code **)(*plVar18 + 0x28))(plVar18);
  if ((*(char *)(lVar17 + 0x97) == '\0') ||
     (lVar17 = (**(code **)(*plVar18 + 0x28))(plVar18), *(char *)(lVar17 + 0x99) == '\0')) {
    local_c0 = 0;
  }
  else {
    local_c0 = *(DLSS_QUALITY *)(lVar16 + 0x218);
  }
  FVar4 = *(FIDELITY_FX_SR *)(lVar16 + 0x21c);
  if (((ulong)param_11 & 1) == 0) {
    uVar1 = false;
  }
  XVar5 = *(XESS_QUALITY *)(lVar16 + 0x220);
  FVar6 = *(FIDELITY_FX_SR_20 *)(lVar16 + 0x228);
  QVar7 = *(QUALCOMM_SGSR_QUALITY *)(lVar16 + 0x224);
  uVar8 = *(uint *)(lVar16 + 0x22c);
  uVar19 = 3;
  if (1 < uVar2) {
    uVar19 = 5;
  }
  uVar14 = HardwareScalability::getValarQuality();
  uVar15 = init(param_1,param_2,param_3,param_4,param_5,(float *)((ulong)param_6 & 0xffffffff),
                param_7,param_8,
                CONCAT31((int3)((uint)in_stack_fffffffffffffe80 >> 8),(char)param_9) & 0xffffff01,
                _param_10,PVar13,local_c0,FVar4,XVar5,FVar6,QVar7,uVar8,uVar15,uVar19,SUB41(uVar3,0)
                ,CONCAT31((int3)((uint)in_stack_fffffffffffffee0 >> 8),cVar9 != '\0'),(bool)uVar1,
                true,cVar10 != '\0',cVar11 != '\0',extraout_s0,cVar12 != '\0',true,
                in_stack_ffffffffffffff18 & 0xffffff00,
                (char *)CONCAT44(in_stack_ffffffffffffff24,uVar14));
  return uVar15 & 1;
}


