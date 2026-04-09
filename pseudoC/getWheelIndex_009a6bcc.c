// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWheelIndex
// Entry Point: 009a6bcc
// Size: 384 bytes
// Signature: undefined __thiscall getWheelIndex(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, char * param_3, Bt2RaycastVehicle * * param_4, int * param_5)


/* Bt2ScenegraphPhysicsContext::getWheelIndex(TransformGroup*, unsigned int, char const*,
   Bt2RaycastVehicle*&, int&) */

undefined8 __thiscall
Bt2ScenegraphPhysicsContext::getWheelIndex
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,char *param_3,
          Bt2RaycastVehicle **param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  Bt2ScenegraphPhysicsContext *pBVar5;
  ulong uVar6;
  Bt2RaycastVehicle *pBVar7;
  Bt2ScenegraphPhysicsContext *pBVar8;
  uint *puVar9;
  
  lVar4 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar4 + 8) >> 3 & 1) != 0) {
    lVar4 = RawTransformGroup::getPhysicsObject();
    pBVar8 = *(Bt2ScenegraphPhysicsContext **)(this + 400);
    if (pBVar8 != (Bt2ScenegraphPhysicsContext *)0x0) {
      uVar6 = *(ulong *)(lVar4 + 0x30);
      pBVar5 = this + 400;
      do {
        if (*(ulong *)(pBVar8 + 0x20) >= uVar6) {
          pBVar5 = pBVar8;
        }
        pBVar8 = *(Bt2ScenegraphPhysicsContext **)
                  (pBVar8 + (ulong)(*(ulong *)(pBVar8 + 0x20) < uVar6) * 8);
      } while (pBVar8 != (Bt2ScenegraphPhysicsContext *)0x0);
      if ((pBVar5 != this + 400) && (*(ulong *)(pBVar5 + 0x20) <= uVar6)) {
        pBVar7 = *(Bt2RaycastVehicle **)(pBVar5 + 0x28);
        uVar1 = *(uint *)(pBVar7 + 0x3c);
        *param_4 = pBVar7;
        if (0 < (int)uVar1) {
          if (*(uint *)(*(long *)(pBVar7 + 0x48) + 0x184) == param_2) {
            *param_5 = 0;
            return 1;
          }
          uVar6 = 0;
          puVar9 = (uint *)(*(long *)(pBVar7 + 0x48) + 0x324);
          do {
            if ((ulong)uVar1 - 1 == uVar6) goto LAB_009a6cbc;
            uVar2 = *puVar9;
            puVar9 = puVar9 + 0x68;
            uVar6 = uVar6 + 1;
          } while (uVar2 != param_2);
          *param_5 = (int)uVar6;
          if (uVar6 < uVar1) {
            return 1;
          }
        }
      }
    }
  }
LAB_009a6cbc:
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 009a6d14 to 009a6d1f has its CatchHandler @ 009a6d4c */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                     "Error (physics): Wheel shape not found for \'%s\', object %s wheelShapeIndex %u\n"
                     ,param_3,*(undefined8 *)(param_1 + 8),(ulong)param_2);
  return 0;
}


