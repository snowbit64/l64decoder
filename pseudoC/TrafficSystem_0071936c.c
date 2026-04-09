// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TrafficSystem
// Entry Point: 0071936c
// Size: 744 bytes
// Signature: undefined __thiscall ~TrafficSystem(TrafficSystem * this)


/* TrafficSystem::~TrafficSystem() */

void __thiscall TrafficSystem::~TrafficSystem(TrafficSystem *this)

{
  long lVar1;
  long lVar2;
  size_t __n;
  UpdateManager *this_00;
  void *pvVar3;
  ulong uVar4;
  TrafficVehicle *this_01;
  long lVar5;
  
  *(undefined ***)(this + 0x20) = &PTR__TrafficSystem_00fda2b8;
  *(undefined ***)this = &PTR__TrafficSystem_00fda280;
  *(undefined ***)(this + 0x30) = &PTR_onAssetLoaded_00fda2e0;
  *(undefined ***)(this + 0x38) = &PTR__TrafficSystem_00fda300;
  *(undefined ***)(this + 0x58) = &PTR__TrafficSystem_00fda320;
                    /* try { // try from 007193c0 to 007193cb has its CatchHandler @ 00719654 */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x20));
  lVar5 = *(long *)(this + 0x7268);
  if (lVar5 != 0) {
    lVar1 = *(long *)(lVar5 + 0x40);
    lVar2 = *(long *)(lVar5 + 0x48) - lVar1;
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        if (*(undefined8 **)(lVar1 + uVar4 * 8) == (undefined8 *)(this + 0x58)) {
          pvVar3 = (void *)(lVar1 + uVar4 * 8);
          __n = *(long *)(lVar5 + 0x48) - (long)(void *)((long)pvVar3 + 8);
          if (__n != 0) {
            memmove(pvVar3,(void *)((long)pvVar3 + 8),__n);
          }
          *(size_t *)(lVar5 + 0x48) = (long)pvVar3 + __n;
          break;
        }
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (uVar4 < (ulong)(lVar2 >> 3));
    }
  }
  if (*(uint *)(this + 0x4d18) != 0) {
    uVar4 = 0;
    this_01 = (TrafficVehicle *)(this + 0x4d20);
    do {
                    /* try { // try from 00719448 to 0071944f has its CatchHandler @ 00719658 */
      TrafficVehicle::destroy(this_01,*(VehicleNavigationMapGenerator **)(this + 0x7268));
      uVar4 = uVar4 + 1;
      this_01 = this_01 + 0x3a8;
    } while (uVar4 < *(uint *)(this + 0x4d18));
  }
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  pvVar3 = *(void **)(this + 0x71b8);
  *(undefined8 *)(this + 0x68) = 0;
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x71c0) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(void **)(this + 0x71b0) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x71b0));
  }
  TrafficVehicle::VehicleSharedContext::~VehicleSharedContext
            ((VehicleSharedContext *)(this + 0x4c88));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4bf0));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4b58));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4ac0));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4a28));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4990));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x48f8));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4860));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x47c8));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4730));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4698));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4600));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4568));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x44d0));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4438));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x43a0));
  TrafficVehicle::VehicleSource::~VehicleSource((VehicleSource *)(this + 0x4308));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x3ff0));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x3ce0));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x39d0));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x36c0));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x33b0));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x30a0));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x2d90));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x2a80));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x2770));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x2460));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x2150));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x1e40));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x1b30));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x1820));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x1510));
  TrafficVehicle::TrafficVehicleSource::~TrafficVehicleSource
            ((TrafficVehicleSource *)(this + 0x1200));
  I3DAssetPtr::~I3DAssetPtr((I3DAssetPtr *)(this + 0x70));
  DeleteNotifier::~DeleteNotifier((DeleteNotifier *)(this + 0x38));
  Entity::~Entity((Entity *)this);
  return;
}


