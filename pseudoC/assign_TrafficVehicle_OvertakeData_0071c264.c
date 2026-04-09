// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: assign<TrafficVehicle::OvertakeData*>
// Entry Point: 0071c264
// Size: 428 bytes
// Signature: type __thiscall assign<TrafficVehicle::OvertakeData*>(vector<TrafficVehicle::OvertakeData,std::__ndk1::allocator<TrafficVehicle::OvertakeData>> * this, OvertakeData * param_1, OvertakeData * param_2)


/* std::__ndk1::enable_if<__is_cpp17_forward_iterator<TrafficVehicle::OvertakeData*>::value&&is_constructible<TrafficVehicle::OvertakeData,
   std::__ndk1::iterator_traits<TrafficVehicle::OvertakeData*>::reference>::value, void>::type
   std::__ndk1::vector<TrafficVehicle::OvertakeData,
   std::__ndk1::allocator<TrafficVehicle::OvertakeData>
   >::assign<TrafficVehicle::OvertakeData*>(TrafficVehicle::OvertakeData*,
   TrafficVehicle::OvertakeData*) */

type __thiscall
std::__ndk1::
vector<TrafficVehicle::OvertakeData,std::__ndk1::allocator<TrafficVehicle::OvertakeData>>::
assign<TrafficVehicle::OvertakeData*>
          (vector<TrafficVehicle::OvertakeData,std::__ndk1::allocator<TrafficVehicle::OvertakeData>>
           *this,OvertakeData *param_1,OvertakeData *param_2)

{
  OvertakeData *__src;
  type tVar1;
  void *pvVar2;
  vector<TrafficVehicle::OvertakeData,std::__ndk1::allocator<TrafficVehicle::OvertakeData>> *pvVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong __n;
  void *pvVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(this + 0x10);
  __n = (long)param_2 - (long)param_1;
  pvVar8 = *(void **)this;
  uVar9 = ((long)__n >> 2) * -0x3333333333333333;
  lVar7 = lVar5 - (long)pvVar8 >> 2;
  if (uVar9 < (ulong)(lVar7 * -0x3333333333333333) || uVar9 + lVar7 * 0x3333333333333333 == 0) {
    lVar5 = *(long *)(this + 8) - (long)pvVar8 >> 2;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar8);
    if (uVar9 < (ulong)(lVar5 * -0x3333333333333333) || uVar9 + lVar5 * 0x3333333333333333 == 0) {
      __src = param_2;
    }
    sVar4 = (long)__src - (long)param_1;
    pvVar3 = this;
    if (sVar4 != 0) {
      pvVar3 = (vector<TrafficVehicle::OvertakeData,std::__ndk1::allocator<TrafficVehicle::OvertakeData>>
                *)memmove(pvVar8,param_1,sVar4);
    }
    tVar1 = (type)pvVar3;
    if (uVar9 < (ulong)(lVar5 * -0x3333333333333333) || uVar9 + lVar5 * 0x3333333333333333 == 0) {
      *(size_t *)(this + 8) = (long)pvVar8 + sVar4;
    }
    else {
      pvVar8 = *(void **)(this + 8);
      sVar4 = (long)param_2 - (long)__src;
      if (0 < (long)sVar4) {
        pvVar2 = memcpy(pvVar8,__src,sVar4);
        tVar1 = (type)pvVar2;
        pvVar8 = (void *)((long)pvVar8 + (sVar4 / 0x14) * 0x14);
      }
      *(void **)(this + 8) = pvVar8;
    }
    return tVar1;
  }
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 8) = pvVar8;
    operator_delete(pvVar8);
    lVar5 = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (uVar9 < 0xccccccccccccccd) {
    uVar6 = (lVar5 >> 2) * -0x6666666666666666;
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    if (0x666666666666665 < (ulong)((lVar5 >> 2) * -0x3333333333333333)) {
      uVar9 = 0xccccccccccccccc;
    }
    if (uVar9 < 0xccccccccccccccd) {
      pvVar2 = operator_new(uVar9 * 0x14);
      *(void **)this = pvVar2;
      *(void **)(this + 8) = pvVar2;
      *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 0x14);
      pvVar8 = pvVar2;
      if (0 < (long)__n) {
        pvVar8 = memcpy(pvVar2,param_1,__n);
        pvVar2 = (void *)((long)pvVar2 + (__n / 0x14) * 0x14);
      }
      *(void **)(this + 8) = pvVar2;
      return (type)pvVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_length_error();
}


