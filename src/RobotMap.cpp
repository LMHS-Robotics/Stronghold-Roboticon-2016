// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::driveTrainfrontLeft;
std::shared_ptr<SpeedController> RobotMap::driveTrainfrontRight;
std::shared_ptr<SpeedController> RobotMap::driveTrainrearLeft;
std::shared_ptr<SpeedController> RobotMap::driveTrainrearRight;
std::shared_ptr<RobotDrive> RobotMap::driveTrainRobotDrive41;
std::shared_ptr<AnalogGyro> RobotMap::driveTrainspoopyGyro;
//std::shared_ptr<Encoder> RobotMap::driveTrainRightEncoder;
//std::shared_ptr<Encoder> RobotMap::driveTrainLeftEncoder;
std::shared_ptr<SpeedController> RobotMap::flipperSubflipperMotor;
std::shared_ptr<DigitalInput> RobotMap::flipperSublimitFipper;
std::shared_ptr<Encoder> RobotMap::launcherleftEncoder;
std::shared_ptr<Encoder> RobotMap::launcherrightEncoder;
std::shared_ptr<AnalogInput> RobotMap::launcherUltrasanic;
std::shared_ptr<CANTalon> RobotMap::launcherrightMotor;
std::shared_ptr<CANTalon> RobotMap::launcherleftMotor;
std::shared_ptr<SpeedController> RobotMap::boulderIntakeintakeUpandDown;
std::shared_ptr<SpeedController> RobotMap::boulderIntakeintakeBeltMotor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

std::shared_ptr<DigitalInput> RobotMap::boulderIntakelimitBottom;

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveTrainfrontLeft.reset(new Talon(0));
    lw->AddActuator("DriveTrain", "frontLeft", std::static_pointer_cast<Talon>(driveTrainfrontLeft));//all of this code adds all components to live window for test mode.
    
    driveTrainfrontRight.reset(new Talon(1));//talonn
    lw->AddActuator("DriveTrain", "frontRight", std::static_pointer_cast<Talon>(driveTrainfrontRight));
    
    driveTrainrearLeft.reset(new Talon(2));
    lw->AddActuator("DriveTrain", "rearLeft", std::static_pointer_cast<Talon>(driveTrainrearLeft));
    
    driveTrainrearRight.reset(new Talon(3));//talon
    lw->AddActuator("DriveTrain", "rearRight", std::static_pointer_cast<Talon>(driveTrainrearRight));
    
    driveTrainRobotDrive41.reset(new RobotDrive(driveTrainfrontLeft, driveTrainrearLeft,
              driveTrainfrontRight, driveTrainrearRight));
    
    driveTrainRobotDrive41->SetSafetyEnabled(true);
        driveTrainRobotDrive41->SetExpiration(0.1);
        driveTrainRobotDrive41->SetSensitivity(0.5);
        driveTrainRobotDrive41->SetMaxOutput(1.0);

    driveTrainspoopyGyro.reset(new AnalogGyro(0));
    lw->AddSensor("DriveTrain", "spoopyGyro", driveTrainspoopyGyro);
    driveTrainspoopyGyro->SetSensitivity(0.007);
    //driveTrainRightEncoder.reset(new Encoder(0, 1, false, Encoder::k4X));
    //lw->AddSensor("DriveTrain", "RightEncoder", driveTrainRightEncoder);
   // driveTrainRightEncoder->SetDistancePerPulse(1.0);
    //driveTrainRightEncoder->SetPIDSourceType(PIDSourceType::kDisplacement);
    //driveTrainLeftEncoder.reset(new Encoder(6, 7, false, Encoder::k4X));
    //lw->AddSensor("DriveTrain", "LeftEncoder", driveTrainLeftEncoder);
    //driveTrainLeftEncoder->SetDistancePerPulse(1.0);
    //driveTrainLeftEncoder->SetPIDSourceType(PIDSourceType::kDisplacement);
    flipperSubflipperMotor.reset(new Jaguar(7));
    lw->AddActuator("FlipperSub", "flipperMotor", std::static_pointer_cast<Jaguar>(flipperSubflipperMotor));
    
    flipperSublimitFipper.reset(new DigitalInput(4));
    lw->AddSensor("FlipperSub", "limitFipper", flipperSublimitFipper);
    
    launcherleftEncoder.reset(new Encoder(0, 1, false, Encoder::k4X));
    lw->AddSensor("Launcher", "leftEncoder", launcherleftEncoder);
    launcherleftEncoder->SetDistancePerPulse( ( (PI * FLYWHEEL_DIAMETER) / PULSE_PER_REVOLUTION ) / (FLYWHEEL_GEAR_RATIO * FUDGE_FACTOR) );
    //launcherleftEncoder->SetDistancePerPulse(1.0);//360cpr which is 1 degree per cycle
    launcherleftEncoder->SetPIDSourceType(PIDSourceType::kRate);
    launcherleftEncoder->SetReverseDirection(true);
    launcherrightEncoder.reset(new Encoder(2, 3, false, Encoder::k4X));
    lw->AddSensor("Launcher", "rightEncoder", launcherrightEncoder);
    launcherrightEncoder->SetDistancePerPulse( ( (PI * FLYWHEEL_DIAMETER) / PULSE_PER_REVOLUTION ) / (FLYWHEEL_GEAR_RATIO * FUDGE_FACTOR) );
    //launcherrightEncoder->SetDistancePerPulse(1.0);
    launcherrightEncoder->SetPIDSourceType(PIDSourceType::kRate);
    launcherUltrasanic.reset(new AnalogInput(1));
    lw->AddSensor("Launcher", "Ultrasanic", launcherUltrasanic);
    
    launcherrightMotor.reset(new CANTalon(2));
    lw->AddActuator("Launcher", "rightMotor", launcherrightMotor);
    
    launcherleftMotor.reset(new CANTalon(1));
    lw->AddActuator("Launcher", "leftMotor", launcherleftMotor);
    

    boulderIntakeintakeUpandDown.reset(new Jaguar(6));
    lw->AddActuator("BoulderIntake", "intakeUpandDown", std::static_pointer_cast<Jaguar>(boulderIntakeintakeUpandDown));
    
    boulderIntakeintakeBeltMotor.reset(new Jaguar(5));//change this to another motor controller
    lw->AddActuator("BoulderIntake", "intakeBeltMotor", std::static_pointer_cast<Jaguar>(boulderIntakeintakeBeltMotor));

    boulderIntakelimitBottom.reset(new DigitalInput(8));
    lw->AddSensor("BoulderIntake", "limitBottom", boulderIntakelimitBottom);
    
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

      launcherleftMotor.get()->ConfigNeutralMode(CANSpeedController::kNeutralMode_Coast);//sets talonSRX mode to coast for flywheels
      launcherrightMotor.get()->ConfigNeutralMode(CANSpeedController::kNeutralMode_Coast);

    /*
    driveTrainRightEncoder->SetDistancePerPulse( ( (PI * TANK_WHEEL_DIAMETER) / PULSE_PER_REVOLUTION ) / (TANK_GEAR_RATIO * FUDGE_FACTOR) );
    launcherleftEncoder->SetDistancePerPulse( ( (PI * FLYWHEEL_DIAMETER) / PULSE_PER_REVOLUTION ) / (FLYWHEEL_GEAR_RATIO * FUDGE_FACTOR) );
     */
}
