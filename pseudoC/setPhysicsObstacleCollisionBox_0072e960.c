// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPhysicsObstacleCollisionBox
// Entry Point: 0072e960
// Size: 288 bytes
// Signature: undefined __thiscall setPhysicsObstacleCollisionBox(VehicleNavigationMapGenerator * this, TransformGroup * param_1, Vector3 * param_2, Vector3 * param_3)


/* VehicleNavigationMapGenerator::setPhysicsObstacleCollisionBox(TransformGroup*, Vector3 const&,
   Vector3 const&) */

void __thiscall
VehicleNavigationMapGenerator::setPhysicsObstacleCollisionBox
          (VehicleNavigationMapGenerator *this,TransformGroup *param_1,Vector3 *param_2,
          Vector3 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  Logger *this_00;
  long *plVar4;
  undefined8 uVar5;
  
  if ((((*(float *)param_3 == 0.0) && (*(float *)(param_3 + 4) == 0.0)) &&
      (*(float *)(param_3 + 8) == 0.0)) &&
     (lVar3 = RawTransformGroup::getPhysicsObject(), (*(byte *)(lVar3 + 8) >> 3 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0072ea40 to 0072ea47 has its CatchHandler @ 0072ea90 */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 0072ea4c to 0072ea4f has its CatchHandler @ 0072ea80 */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Error while setting physics obstacles collision boxes: zero half extent is only allowed for rigid body transforms\n"
                     );
  }
  else {
    plVar4 = *(long **)(this + 0x188);
    do {
      if (plVar4 == *(long **)(this + 400)) {
        return;
      }
      lVar3 = *plVar4;
      plVar4 = plVar4 + 1;
    } while (*(TransformGroup **)(lVar3 + 0x18) != param_1);
    uVar5 = *(undefined8 *)param_3;
    *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(param_3 + 8);
    *(undefined8 *)(lVar3 + 0x2c) = uVar5;
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar5 = *(undefined8 *)param_2;
    *(undefined *)(lVar3 + 0x38) = 1;
    *(undefined4 *)(lVar3 + 0x28) = uVar1;
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
  }
  return;
}


