/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.11.6
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGCommand.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGCommand::SWGCommand(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCommand::SWGCommand() {
    group = nullptr;
    m_group_isSet = false;
    description = nullptr;
    m_description_isSet = false;
    command = nullptr;
    m_command_isSet = false;
    arg_string = nullptr;
    m_arg_string_isSet = false;
    key = 0;
    m_key_isSet = false;
    key_modifiers = 0;
    m_key_modifiers_isSet = false;
    associate_key = 0;
    m_associate_key_isSet = false;
    release = 0;
    m_release_isSet = false;
}

SWGCommand::~SWGCommand() {
    this->cleanup();
}

void
SWGCommand::init() {
    group = new QString("");
    m_group_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    command = new QString("");
    m_command_isSet = false;
    arg_string = new QString("");
    m_arg_string_isSet = false;
    key = 0;
    m_key_isSet = false;
    key_modifiers = 0;
    m_key_modifiers_isSet = false;
    associate_key = 0;
    m_associate_key_isSet = false;
    release = 0;
    m_release_isSet = false;
}

void
SWGCommand::cleanup() {
    if(group != nullptr) { 
        delete group;
    }
    if(description != nullptr) { 
        delete description;
    }
    if(command != nullptr) { 
        delete command;
    }
    if(arg_string != nullptr) { 
        delete arg_string;
    }




}

SWGCommand*
SWGCommand::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCommand::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&group, pJson["group"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&description, pJson["description"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&command, pJson["command"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&arg_string, pJson["argString"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&key, pJson["key"], "qint32", "");
    
    ::SWGSDRangel::setValue(&key_modifiers, pJson["keyModifiers"], "qint32", "");
    
    ::SWGSDRangel::setValue(&associate_key, pJson["associateKey"], "qint32", "");
    
    ::SWGSDRangel::setValue(&release, pJson["release"], "qint32", "");
    
}

QString
SWGCommand::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGCommand::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(group != nullptr && *group != QString("")){
        toJsonValue(QString("group"), group, obj, QString("QString"));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(command != nullptr && *command != QString("")){
        toJsonValue(QString("command"), command, obj, QString("QString"));
    }
    if(arg_string != nullptr && *arg_string != QString("")){
        toJsonValue(QString("argString"), arg_string, obj, QString("QString"));
    }
    if(m_key_isSet){
        obj->insert("key", QJsonValue(key));
    }
    if(m_key_modifiers_isSet){
        obj->insert("keyModifiers", QJsonValue(key_modifiers));
    }
    if(m_associate_key_isSet){
        obj->insert("associateKey", QJsonValue(associate_key));
    }
    if(m_release_isSet){
        obj->insert("release", QJsonValue(release));
    }

    return obj;
}

QString*
SWGCommand::getGroup() {
    return group;
}
void
SWGCommand::setGroup(QString* group) {
    this->group = group;
    this->m_group_isSet = true;
}

QString*
SWGCommand::getDescription() {
    return description;
}
void
SWGCommand::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

QString*
SWGCommand::getCommand() {
    return command;
}
void
SWGCommand::setCommand(QString* command) {
    this->command = command;
    this->m_command_isSet = true;
}

QString*
SWGCommand::getArgString() {
    return arg_string;
}
void
SWGCommand::setArgString(QString* arg_string) {
    this->arg_string = arg_string;
    this->m_arg_string_isSet = true;
}

qint32
SWGCommand::getKey() {
    return key;
}
void
SWGCommand::setKey(qint32 key) {
    this->key = key;
    this->m_key_isSet = true;
}

qint32
SWGCommand::getKeyModifiers() {
    return key_modifiers;
}
void
SWGCommand::setKeyModifiers(qint32 key_modifiers) {
    this->key_modifiers = key_modifiers;
    this->m_key_modifiers_isSet = true;
}

qint32
SWGCommand::getAssociateKey() {
    return associate_key;
}
void
SWGCommand::setAssociateKey(qint32 associate_key) {
    this->associate_key = associate_key;
    this->m_associate_key_isSet = true;
}

qint32
SWGCommand::getRelease() {
    return release;
}
void
SWGCommand::setRelease(qint32 release) {
    this->release = release;
    this->m_release_isSet = true;
}


bool
SWGCommand::isSet(){
    bool isObjectUpdated = false;
    do{
        if(group && *group != QString("")){
            isObjectUpdated = true; break;
        }
        if(description && *description != QString("")){
            isObjectUpdated = true; break;
        }
        if(command && *command != QString("")){
            isObjectUpdated = true; break;
        }
        if(arg_string && *arg_string != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_key_isSet){
            isObjectUpdated = true; break;
        }
        if(m_key_modifiers_isSet){
            isObjectUpdated = true; break;
        }
        if(m_associate_key_isSet){
            isObjectUpdated = true; break;
        }
        if(m_release_isSet){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}

