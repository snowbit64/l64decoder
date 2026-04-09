// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VehicleNavigationPlanner
// Entry Point: 007433c4
// Size: 168 bytes
// Signature: undefined __thiscall VehicleNavigationPlanner(VehicleNavigationPlanner * this, uint param_1)


/* VehicleNavigationPlanner::VehicleNavigationPlanner(unsigned int) */

void __thiscall
VehicleNavigationPlanner::VehicleNavigationPlanner(VehicleNavigationPlanner *this,uint param_1)

{
  Thread *this_00;
  
  Event::Event((Event *)this,false,false);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(uint *)(this + 200) = param_1;
  *(undefined2 *)(this + 0xcc) = 0;
  this[0xce] = (VehicleNavigationPlanner)0x0;
                    /* try { // try from 00743410 to 00743417 has its CatchHandler @ 00743490 */
  this_00 = (Thread *)operator_new(0x48);
                    /* try { // try from 0074341c to 0074341f has its CatchHandler @ 00743480 */
  Thread::Thread(this_00);
  *(Thread **)(this + 0xd0) = this_00;
                    /* try { // try from 00743428 to 00743433 has its CatchHandler @ 00743490 */
  Mutex::Mutex((Mutex *)(this + 0xd8),true);
                    /* try { // try from 00743438 to 0074345b has its CatchHandler @ 0074346c */
  Thread::start(*(Thread **)(this + 0xd0),doWorkFunc,this,0xffffffff,"DoThePlanning",2,0x80000);
  return;
}


