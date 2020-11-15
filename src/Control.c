/*----------------------------------------------------------------------------
 * File:  Control.c
 *
 * UML Component Port Messages
 * Component/Module Name:  Control
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "gnc_sys_types.h"
#include "Control.h"
#include "MAV.h"
#include "Control_classes.h"

/*
 * Interface:  mavcontrol
 * Required Port:  Port1
 * To Provider Message:  arm
 */
void
Control_Port1_arm()
{
  MAV_Port1_arm();
}

/*
 * Interface:  mavcontrol
 * Required Port:  Port1
 * To Provider Message:  get_heading
 */
r_t
Control_Port1_get_heading()
{
return   MAV_Port1_get_heading();
}

/*
 * Interface:  mavcontrol
 * Required Port:  Port1
 * To Provider Message:  init
 */
void
Control_Port1_init()
{
  MAV_Port1_init();
}

/*
 * Interface:  mavcontrol
 * Required Port:  Port1
 * To Provider Message:  land
 */
void
Control_Port1_land()
{
  MAV_Port1_land();
}

/*
 * Interface:  mavcontrol
 * Required Port:  Port1
 * From Provider Message:  ready
 */
void
Control_Port1_ready()
{
  Control_Controller * ctrl=0;
  /* SELECT any ctrl FROM INSTANCES OF Controller */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ctrl FROM INSTANCES OF Controller" );
  ctrl = (Control_Controller *) Escher_SetGetAny( &pG_Control_Controller_extent.active );
  /* GENERATE Controller2:ready() TO ctrl */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE Controller2:ready() TO ctrl" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( ctrl, &Control_Controllerevent2c );
    Escher_SendEvent( e );
  }
}

/*
 * Interface:  mavcontrol
 * Required Port:  Port1
 * To Provider Message:  set_destination
 */
void
Control_Port1_set_destination( const r_t p_x, const r_t p_y, const r_t p_z )
{
  MAV_Port1_set_destination(  p_x, p_y, p_z );
}

/*
 * Interface:  mavcontrol
 * Required Port:  Port1
 * To Provider Message:  set_heading
 */
void
Control_Port1_set_heading( const r_t p_heading )
{
  MAV_Port1_set_heading(  p_heading );
}

/*
 * Interface:  mavcontrol
 * Required Port:  Port1
 * To Provider Message:  takeoff
 */
void
Control_Port1_takeoff( const r_t p_alt )
{
  MAV_Port1_takeoff(  p_alt );
}
/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  halt
 */
void
Control_halt()
{
  Control_Controller * ctrl=0;
  /* SELECT any ctrl FROM INSTANCES OF Controller */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ctrl FROM INSTANCES OF Controller" );
  ctrl = (Control_Controller *) Escher_SetGetAny( &pG_Control_Controller_extent.active );
  /* GENERATE Controller3:halt() TO ctrl */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE Controller3:halt() TO ctrl" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( ctrl, &Control_Controllerevent3c );
    Escher_SendEvent( e );
  }
}

/*
 * Domain Function:  setup
 */
void
Control_setup()
{
  Control_Waypoint * dumy;Control_Waypoint * wp20;Control_Waypoint * wp19;Control_Waypoint * wp18;Control_Waypoint * wp17;Control_Waypoint * wp16;Control_Waypoint * wp15;Control_Waypoint * wp14;Control_Waypoint * wp13;Control_Waypoint * wp12;Control_Waypoint * wp11;Control_Waypoint * wp10;Control_Waypoint * wp9;Control_Waypoint * wp8;Control_Waypoint * wp7;Control_Waypoint * wp6;Control_Waypoint * wp5;Control_Waypoint * wp4;Control_Waypoint * wp3;Control_Waypoint * wp2;Control_Waypoint * wp1;Control_Controller * ctrl;
  /* CREATE OBJECT INSTANCE ctrl OF Controller */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE ctrl OF Controller" );
  ctrl = (Control_Controller *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Controller_CLASS_NUMBER );
  /* CREATE OBJECT INSTANCE wp1 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp1 OF Waypoint" );
  wp1 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp1.x = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp1.x = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp1, "Waypoint", "wp1.x" ))->x = 0;
  /* ASSIGN wp1.y = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp1.y = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp1, "Waypoint", "wp1.y" ))->y = 0;
  /* ASSIGN wp1.z = 11 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp1.z = 11" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp1, "Waypoint", "wp1.z" ))->z = 11;
  /* RELATE ctrl TO wp1 ACROSS R1 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE ctrl TO wp1 ACROSS R1" );
  Control_Waypoint_R1_Link_begin_with( ctrl, wp1 );
  /* RELATE ctrl TO wp1 ACROSS R3 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE ctrl TO wp1 ACROSS R3" );
  Control_Waypoint_R3_Link_is_flying_to( ctrl, wp1 );
  /* CREATE OBJECT INSTANCE wp2 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp2 OF Waypoint" );
  wp2 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp2.x = 10 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp2.x = 10" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp2, "Waypoint", "wp2.x" ))->x = 10;
  /* ASSIGN wp2.y = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp2.y = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp2, "Waypoint", "wp2.y" ))->y = 0;
  /* ASSIGN wp2.z = 11 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp2.z = 11" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp2, "Waypoint", "wp2.z" ))->z = 11;
  /* RELATE wp1 TO wp2 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp1 TO wp2 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp1, wp2 );
  /* CREATE OBJECT INSTANCE wp3 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp3 OF Waypoint" );
  wp3 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp3.x = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp3.x = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp3, "Waypoint", "wp3.x" ))->x = 15;
  /* ASSIGN wp3.y = - 12.5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp3.y = - 12.5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp3, "Waypoint", "wp3.y" ))->y = -12.5;
  /* ASSIGN wp3.z = 11 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp3.z = 11" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp3, "Waypoint", "wp3.z" ))->z = 11;
  /* RELATE wp2 TO wp3 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp2 TO wp3 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp2, wp3 );
  /* CREATE OBJECT INSTANCE wp4 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp4 OF Waypoint" );
  wp4 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp4.x = 10 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp4.x = 10" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp4, "Waypoint", "wp4.x" ))->x = 10;
  /* ASSIGN wp4.y = - 12.5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp4.y = - 12.5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp4, "Waypoint", "wp4.y" ))->y = -12.5;
  /* ASSIGN wp4.z = 11 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp4.z = 11" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp4, "Waypoint", "wp4.z" ))->z = 11;
  /* RELATE wp3 TO wp4 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp3 TO wp4 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp3, wp4 );
  /* CREATE OBJECT INSTANCE wp5 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp5 OF Waypoint" );
  wp5 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp5.x = 5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp5.x = 5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp5, "Waypoint", "wp5.x" ))->x = 5;
  /* ASSIGN wp5.y = - 12.5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp5.y = - 12.5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp5, "Waypoint", "wp5.y" ))->y = -12.5;
  /* ASSIGN wp5.z = 11 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp5.z = 11" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp5, "Waypoint", "wp5.z" ))->z = 11;
  /* RELATE wp4 TO wp5 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp4 TO wp5 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp4, wp5 );
  /* CREATE OBJECT INSTANCE wp6 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp6 OF Waypoint" );
  wp6 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp6.x = 5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp6.x = 5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp6, "Waypoint", "wp6.x" ))->x = 5;
  /* ASSIGN wp6.y = - 20 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp6.y = - 20" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp6, "Waypoint", "wp6.y" ))->y = -20;
  /* ASSIGN wp6.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp6.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp6, "Waypoint", "wp6.z" ))->z = 15;
  /* RELATE wp5 TO wp6 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp5 TO wp6 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp5, wp6 );
  /* CREATE OBJECT INSTANCE wp7 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp7 OF Waypoint" );
  wp7 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp7.x = - 20 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp7.x = - 20" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp7, "Waypoint", "wp7.x" ))->x = -20;
  /* ASSIGN wp7.y = - 20 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp7.y = - 20" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp7, "Waypoint", "wp7.y" ))->y = -20;
  /* ASSIGN wp7.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp7.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp7, "Waypoint", "wp7.z" ))->z = 15;
  /* RELATE wp6 TO wp7 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp6 TO wp7 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp6, wp7 );
  /* CREATE OBJECT INSTANCE wp8 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp8 OF Waypoint" );
  wp8 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp8.x = - 20 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp8.x = - 20" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp8, "Waypoint", "wp8.x" ))->x = -20;
  /* ASSIGN wp8.y = - 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp8.y = - 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp8, "Waypoint", "wp8.y" ))->y = -15;
  /* ASSIGN wp8.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp8.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp8, "Waypoint", "wp8.z" ))->z = 15;
  /* RELATE wp7 TO wp8 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp7 TO wp8 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp7, wp8 );
  /* CREATE OBJECT INSTANCE wp9 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp9 OF Waypoint" );
  wp9 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp9.x = 5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp9.x = 5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp9, "Waypoint", "wp9.x" ))->x = 5;
  /* ASSIGN wp9.y = - 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp9.y = - 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp9, "Waypoint", "wp9.y" ))->y = -15;
  /* ASSIGN wp9.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp9.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp9, "Waypoint", "wp9.z" ))->z = 15;
  /* RELATE wp8 TO wp9 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp8 TO wp9 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp8, wp9 );
  /* CREATE OBJECT INSTANCE wp10 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp10 OF Waypoint" );
  wp10 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp10.x = 5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp10.x = 5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp10, "Waypoint", "wp10.x" ))->x = 5;
  /* ASSIGN wp10.y = - 10 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp10.y = - 10" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp10, "Waypoint", "wp10.y" ))->y = -10;
  /* ASSIGN wp10.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp10.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp10, "Waypoint", "wp10.z" ))->z = 15;
  /* RELATE wp9 TO wp10 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp9 TO wp10 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp9, wp10 );
  /* CREATE OBJECT INSTANCE wp11 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp11 OF Waypoint" );
  wp11 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp11.x = - 20 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp11.x = - 20" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp11, "Waypoint", "wp11.x" ))->x = -20;
  /* ASSIGN wp11.y = - 10 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp11.y = - 10" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp11, "Waypoint", "wp11.y" ))->y = -10;
  /* ASSIGN wp11.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp11.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp11, "Waypoint", "wp11.z" ))->z = 15;
  /* RELATE wp10 TO wp11 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp10 TO wp11 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp10, wp11 );
  /* CREATE OBJECT INSTANCE wp12 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp12 OF Waypoint" );
  wp12 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp12.x = - 20 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp12.x = - 20" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp12, "Waypoint", "wp12.x" ))->x = -20;
  /* ASSIGN wp12.y = - 5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp12.y = - 5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp12, "Waypoint", "wp12.y" ))->y = -5;
  /* ASSIGN wp12.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp12.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp12, "Waypoint", "wp12.z" ))->z = 15;
  /* RELATE wp11 TO wp12 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp11 TO wp12 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp11, wp12 );
  /* CREATE OBJECT INSTANCE wp13 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp13 OF Waypoint" );
  wp13 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp13.x = 5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp13.x = 5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp13, "Waypoint", "wp13.x" ))->x = 5;
  /* ASSIGN wp13.y = - 5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp13.y = - 5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp13, "Waypoint", "wp13.y" ))->y = -5;
  /* ASSIGN wp13.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp13.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp13, "Waypoint", "wp13.z" ))->z = 15;
  /* RELATE wp12 TO wp13 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp12 TO wp13 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp12, wp13 );
  /* CREATE OBJECT INSTANCE wp14 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp14 OF Waypoint" );
  wp14 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp14.x = 5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp14.x = 5" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp14, "Waypoint", "wp14.x" ))->x = 5;
  /* ASSIGN wp14.y = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp14.y = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp14, "Waypoint", "wp14.y" ))->y = 0;
  /* ASSIGN wp14.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp14.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp14, "Waypoint", "wp14.z" ))->z = 15;
  /* RELATE wp13 TO wp14 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp13 TO wp14 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp13, wp14 );
  /* CREATE OBJECT INSTANCE wp15 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp15 OF Waypoint" );
  wp15 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp15.x = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp15.x = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp15, "Waypoint", "wp15.x" ))->x = 0;
  /* ASSIGN wp15.y = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp15.y = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp15, "Waypoint", "wp15.y" ))->y = 0;
  /* ASSIGN wp15.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp15.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp15, "Waypoint", "wp15.z" ))->z = 15;
  /* RELATE wp14 TO wp15 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp14 TO wp15 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp14, wp15 );
  /* CREATE OBJECT INSTANCE wp16 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp16 OF Waypoint" );
  wp16 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp16.x = - 20 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp16.x = - 20" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp16, "Waypoint", "wp16.x" ))->x = -20;
  /* ASSIGN wp16.y = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp16.y = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp16, "Waypoint", "wp16.y" ))->y = 0;
  /* ASSIGN wp16.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp16.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp16, "Waypoint", "wp16.z" ))->z = 15;
  /* RELATE wp15 TO wp16 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp15 TO wp16 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp15, wp16 );
  /* CREATE OBJECT INSTANCE wp17 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp17 OF Waypoint" );
  wp17 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp17.x = - 18 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp17.x = - 18" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp17, "Waypoint", "wp17.x" ))->x = -18;
  /* ASSIGN wp17.y = 21 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp17.y = 21" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp17, "Waypoint", "wp17.y" ))->y = 21;
  /* ASSIGN wp17.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp17.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp17, "Waypoint", "wp17.z" ))->z = 15;
  /* RELATE wp16 TO wp17 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp16 TO wp17 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp16, wp17 );
  /* CREATE OBJECT INSTANCE wp18 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp18 OF Waypoint" );
  wp18 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp18.x = 18 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp18.x = 18" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp18, "Waypoint", "wp18.x" ))->x = 18;
  /* ASSIGN wp18.y = 21 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp18.y = 21" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp18, "Waypoint", "wp18.y" ))->y = 21;
  /* ASSIGN wp18.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp18.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp18, "Waypoint", "wp18.z" ))->z = 15;
  /* RELATE wp17 TO wp18 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp17 TO wp18 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp17, wp18 );
  /* CREATE OBJECT INSTANCE wp19 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp19 OF Waypoint" );
  wp19 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp19.x = 10 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp19.x = 10" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp19, "Waypoint", "wp19.x" ))->x = 10;
  /* ASSIGN wp19.y = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp19.y = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp19, "Waypoint", "wp19.y" ))->y = 0;
  /* ASSIGN wp19.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp19.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp19, "Waypoint", "wp19.z" ))->z = 15;
  /* RELATE wp18 TO wp19 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp18 TO wp19 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp18, wp19 );
  /* CREATE OBJECT INSTANCE wp20 OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE wp20 OF Waypoint" );
  wp20 = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN wp20.x = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp20.x = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp20, "Waypoint", "wp20.x" ))->x = 0;
  /* ASSIGN wp20.y = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp20.y = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp20, "Waypoint", "wp20.y" ))->y = 0;
  /* ASSIGN wp20.z = 15 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN wp20.z = 15" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( wp20, "Waypoint", "wp20.z" ))->z = 15;
  /* RELATE wp19 TO wp20 ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp19 TO wp20 ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp19, wp20 );
  /* CREATE OBJECT INSTANCE dumy OF Waypoint */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE dumy OF Waypoint" );
  dumy = (Control_Waypoint *) Escher_CreateInstance( Control_DOMAIN_ID, Control_Waypoint_CLASS_NUMBER );
  /* ASSIGN dumy.x = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN dumy.x = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( dumy, "Waypoint", "dumy.x" ))->x = 0;
  /* ASSIGN dumy.y = 0 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN dumy.y = 0" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( dumy, "Waypoint", "dumy.y" ))->y = 0;
  /* ASSIGN dumy.z = 10 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN dumy.z = 10" );
  ((Control_Waypoint *)xtUML_detect_empty_handle( dumy, "Waypoint", "dumy.z" ))->z = 10;
  /* RELATE wp20 TO dumy ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE wp20 TO dumy ACROSS R2" );
  Control_Waypoint_R2_Link_follows( wp20, dumy );
}

/*
 * Domain Function:  start
 */
void
Control_start()
{
  Control_Controller * ctrl=0;
  /* SELECT any ctrl FROM INSTANCES OF Controller */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ctrl FROM INSTANCES OF Controller" );
  ctrl = (Control_Controller *) Escher_SetGetAny( &pG_Control_Controller_extent.active );
  /* GENERATE Controller1:start() TO ctrl */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE Controller1:start() TO ctrl" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( ctrl, &Control_Controllerevent1c );
    Escher_SendEvent( e );
  }
}
/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const Control_class_info[ Control_MAX_CLASS_NUMBERS ] = {
  &pG_Control_Controller_extent,
  &pG_Control_Waypoint_extent
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t Control_EventDispatcher[ Control_STATE_MODELS ] = {
  Control_class_dispatchers
};

void Control_execute_initialization()
{
  /*
   * Initialization Function:  setup
   * Component:  Control
   */
  Control_setup();

}
