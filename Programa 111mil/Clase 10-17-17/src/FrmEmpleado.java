/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author alumno
 */
public class FrmEmpleado extends javax.swing.JFrame {

    
    public FrmEmpleado() {
        initComponents();
    }

    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup_Sexo = new javax.swing.ButtonGroup();
        buttonGroup_Documento = new javax.swing.ButtonGroup();
        PanelDatosPersonales = new javax.swing.JPanel();
        lblTitulo = new javax.swing.JLabel();
        lblNombre = new javax.swing.JLabel();
        lblApellido = new javax.swing.JLabel();
        txtNombre = new javax.swing.JTextField();
        txtApellido = new javax.swing.JTextField();
        lblEdad = new javax.swing.JLabel();
        txtEdad = new javax.swing.JTextField();
        lblDni = new javax.swing.JLabel();
        txtDni = new javax.swing.JTextField();
        rbnMasculino = new javax.swing.JRadioButton();
        rbnFemenino = new javax.swing.JRadioButton();
        rbnOtro = new javax.swing.JRadioButton();
        lblSexo = new javax.swing.JLabel();
        rbn_dni = new javax.swing.JRadioButton();
        rbn_pasaporte = new javax.swing.JRadioButton();
        PanelDatosLaborales = new javax.swing.JPanel();
        lblTitulo1 = new javax.swing.JLabel();
        lblCargo = new javax.swing.JLabel();
        lblIntereses = new javax.swing.JLabel();
        cmbCargos = new javax.swing.JComboBox<>();
        cb_Cine = new javax.swing.JCheckBox();
        cb_Deportes = new javax.swing.JCheckBox();
        cb_Musica = new javax.swing.JCheckBox();
        cb_Arte = new javax.swing.JCheckBox();
        cb_Tecno = new javax.swing.JCheckBox();
        cb_Otro = new javax.swing.JCheckBox();
        cb_Lectura = new javax.swing.JCheckBox();
        btn_alta = new javax.swing.JButton();
        jScrollPane1 = new javax.swing.JScrollPane();
        txtpanel_empleado = new javax.swing.JTextPane();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        PanelDatosPersonales.setBorder(javax.swing.BorderFactory.createEtchedBorder());

        lblTitulo.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        lblTitulo.setText("Datos personales");

        lblNombre.setText("Nombre");

        lblApellido.setText("Apellido");

        txtNombre.setToolTipText("Aqui va tu nombre");
        txtNombre.setCursor(new java.awt.Cursor(java.awt.Cursor.TEXT_CURSOR));
        txtNombre.setFocusCycleRoot(true);

        lblEdad.setText("Edad");

        lblDni.setText("Documento");

        txtDni.setToolTipText("escriba su N° de documento, y luego seleccione su tipo");

        buttonGroup_Sexo.add(rbnMasculino);
        rbnMasculino.setText("Masculino");

        buttonGroup_Sexo.add(rbnFemenino);
        rbnFemenino.setText("Femenino");

        buttonGroup_Sexo.add(rbnOtro);
        rbnOtro.setText("Otro");

        lblSexo.setText("Sexo");

        buttonGroup_Documento.add(rbn_dni);
        rbn_dni.setText("DNI");

        buttonGroup_Documento.add(rbn_pasaporte);
        rbn_pasaporte.setText("Pasaporte");

        javax.swing.GroupLayout PanelDatosPersonalesLayout = new javax.swing.GroupLayout(PanelDatosPersonales);
        PanelDatosPersonales.setLayout(PanelDatosPersonalesLayout);
        PanelDatosPersonalesLayout.setHorizontalGroup(
            PanelDatosPersonalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, PanelDatosPersonalesLayout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(lblTitulo, javax.swing.GroupLayout.PREFERRED_SIZE, 260, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
            .addGroup(PanelDatosPersonalesLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(PanelDatosPersonalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(lblEdad, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(lblSexo, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(lblDni)
                    .addComponent(lblNombre, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(lblApellido, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(PanelDatosPersonalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(PanelDatosPersonalesLayout.createSequentialGroup()
                        .addComponent(rbnMasculino)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(rbnFemenino)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(rbnOtro))
                    .addGroup(PanelDatosPersonalesLayout.createSequentialGroup()
                        .addComponent(txtDni, javax.swing.GroupLayout.PREFERRED_SIZE, 82, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(rbn_dni)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(rbn_pasaporte))
                    .addComponent(txtEdad, javax.swing.GroupLayout.PREFERRED_SIZE, 34, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(txtApellido, javax.swing.GroupLayout.PREFERRED_SIZE, 167, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(txtNombre, javax.swing.GroupLayout.PREFERRED_SIZE, 167, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        PanelDatosPersonalesLayout.setVerticalGroup(
            PanelDatosPersonalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PanelDatosPersonalesLayout.createSequentialGroup()
                .addComponent(lblTitulo, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelDatosPersonalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lblNombre)
                    .addComponent(txtNombre, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelDatosPersonalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txtApellido, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(lblApellido))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelDatosPersonalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txtEdad, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(lblEdad))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelDatosPersonalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txtDni, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(lblDni)
                    .addComponent(rbn_dni)
                    .addComponent(rbn_pasaporte))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(PanelDatosPersonalesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(rbnMasculino)
                    .addComponent(rbnFemenino)
                    .addComponent(rbnOtro)
                    .addComponent(lblSexo))
                .addContainerGap(39, Short.MAX_VALUE))
        );

        PanelDatosLaborales.setBorder(javax.swing.BorderFactory.createEtchedBorder());

        lblTitulo1.setFont(new java.awt.Font("Tahoma", 1, 14)); // NOI18N
        lblTitulo1.setText("Datos laborales");

        lblCargo.setText("Cargo");

        lblIntereses.setText("Intereses");

        cmbCargos.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "<Seleccione>", "Limpieza", "Administrativo", "Gerente", "Supervisor" }));
        cmbCargos.setToolTipText("Eliga el cargo laboral");
        cmbCargos.addItemListener(new java.awt.event.ItemListener() {
            public void itemStateChanged(java.awt.event.ItemEvent evt) {
                cmbCargosItemStateChanged(evt);
            }
        });

        cb_Cine.setText("Cine");

        cb_Deportes.setText("Deportes");

        cb_Musica.setText("Musica");

        cb_Arte.setText("Arte");

        cb_Tecno.setText("Tecnologia");

        cb_Otro.setText("Otro");

        cb_Lectura.setText("Lectura");

        javax.swing.GroupLayout PanelDatosLaboralesLayout = new javax.swing.GroupLayout(PanelDatosLaborales);
        PanelDatosLaborales.setLayout(PanelDatosLaboralesLayout);
        PanelDatosLaboralesLayout.setHorizontalGroup(
            PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, PanelDatosLaboralesLayout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(lblTitulo1, javax.swing.GroupLayout.PREFERRED_SIZE, 260, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
            .addGroup(PanelDatosLaboralesLayout.createSequentialGroup()
                .addContainerGap()
                .addGroup(PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(lblCargo, javax.swing.GroupLayout.PREFERRED_SIZE, 50, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(lblIntereses, javax.swing.GroupLayout.PREFERRED_SIZE, 69, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(cb_Otro)
                    .addComponent(cmbCargos, javax.swing.GroupLayout.PREFERRED_SIZE, 118, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(PanelDatosLaboralesLayout.createSequentialGroup()
                        .addGroup(PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(cb_Tecno)
                            .addComponent(cb_Cine))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(cb_Musica)
                            .addComponent(cb_Deportes))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(cb_Lectura)
                            .addComponent(cb_Arte))))
                .addContainerGap(45, Short.MAX_VALUE))
        );
        PanelDatosLaboralesLayout.setVerticalGroup(
            PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(PanelDatosLaboralesLayout.createSequentialGroup()
                .addComponent(lblTitulo1, javax.swing.GroupLayout.PREFERRED_SIZE, 33, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(lblCargo)
                    .addComponent(cmbCargos, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(lblIntereses)
                    .addGroup(PanelDatosLaboralesLayout.createSequentialGroup()
                        .addGroup(PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(cb_Cine)
                            .addComponent(cb_Deportes)
                            .addComponent(cb_Lectura))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(PanelDatosLaboralesLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(cb_Tecno)
                            .addComponent(cb_Arte)
                            .addComponent(cb_Musica))))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(cb_Otro)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        btn_alta.setText("Alta");
        btn_alta.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btn_altaActionPerformed(evt);
            }
        });

        jScrollPane1.setViewportView(txtpanel_empleado);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(PanelDatosPersonales, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(PanelDatosLaborales, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 264, Short.MAX_VALUE))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(btn_alta, javax.swing.GroupLayout.PREFERRED_SIZE, 86, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(0, 0, Short.MAX_VALUE)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(PanelDatosPersonales, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(PanelDatosLaborales, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addComponent(jScrollPane1))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(btn_alta)
                .addContainerGap(113, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btn_altaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btn_altaActionPerformed
    String nombre ="",apellido="",edad="",documento="",sexo="";
    StringBuilder sb = new StringBuilder();
    
    
    nombre = txtNombre.getText();
    sb.append("Nombre: "+nombre);
    sb.append("\n");
    apellido = txtApellido.getText();
    sb.append("Apellido:"+apellido);
    sb.append("\n");
    edad = txtEdad.getText();
    sb.append("Edad:"+edad);
    sb.append("\n");
    
    if(rbnMasculino.isSelected())
    {
        sexo=rbnMasculino.getText();
    }
    else
    {
        if(rbnFemenino.isSelected())
        {
            sexo=rbnFemenino.getText();    
        }
        else
        {
            sexo=rbnOtro.getText();
        }        
    }
    sb.append("Sexo: "+sexo);
    sb.append("\n");
    if(rbn_dni.isSelected())
    {
        documento=(rbn_dni.getText()+" "+txtDni.getText());
        sb.append(documento);
    }
    else
    {
        documento=(rbn_pasaporte.getText()+" "+txtDni.getText());
        sb.append(documento);
    }
    sb.append("\n");
    sb.append("Cargo: ").append(cmbCargos.getSelectedItem());
    sb.append("\nIntereses:\n");
    if(cb_Arte.isSelected())
    {
        sb.append(cb_Arte.getText()+"\n");        
    }
    if(cb_Cine.isSelected())
    {
        sb.append(cb_Cine.getText()+"\n");        
    }
    if(cb_Deportes.isSelected())
    {
        sb.append(cb_Deportes.getText()+"\n");        
    }
    if(cb_Lectura.isSelected())
    {
        sb.append(cb_Lectura.getText()+"\n");        
    }
    if(cb_Musica.isSelected())
    {
        sb.append(cb_Musica.getText()+"\n");        
    }
    if(cb_Tecno.isSelected())
    {
        sb.append(cb_Tecno.getText()+"\n");        
    }
    if(cb_Otro.isSelected())
    {
        sb.append(cb_Otro.getText()+"\n");        
    }
    
    txtpanel_empleado.setText("Datos del empleado:\n"+sb);
    
        
    }//GEN-LAST:event_btn_altaActionPerformed

    private void cmbCargosItemStateChanged(java.awt.event.ItemEvent evt) {//GEN-FIRST:event_cmbCargosItemStateChanged
        cmbCargos.getSelectedItem();       
        
        
    }//GEN-LAST:event_cmbCargosItemStateChanged

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(FrmEmpleado.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(FrmEmpleado.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(FrmEmpleado.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(FrmEmpleado.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FrmEmpleado().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JPanel PanelDatosLaborales;
    private javax.swing.JPanel PanelDatosPersonales;
    private javax.swing.JButton btn_alta;
    private javax.swing.ButtonGroup buttonGroup_Documento;
    private javax.swing.ButtonGroup buttonGroup_Sexo;
    private javax.swing.JCheckBox cb_Arte;
    private javax.swing.JCheckBox cb_Cine;
    private javax.swing.JCheckBox cb_Deportes;
    private javax.swing.JCheckBox cb_Lectura;
    private javax.swing.JCheckBox cb_Musica;
    private javax.swing.JCheckBox cb_Otro;
    private javax.swing.JCheckBox cb_Tecno;
    private javax.swing.JComboBox<String> cmbCargos;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JLabel lblApellido;
    private javax.swing.JLabel lblCargo;
    private javax.swing.JLabel lblDni;
    private javax.swing.JLabel lblEdad;
    private javax.swing.JLabel lblIntereses;
    private javax.swing.JLabel lblNombre;
    private javax.swing.JLabel lblSexo;
    private javax.swing.JLabel lblTitulo;
    private javax.swing.JLabel lblTitulo1;
    private javax.swing.JRadioButton rbnFemenino;
    private javax.swing.JRadioButton rbnMasculino;
    private javax.swing.JRadioButton rbnOtro;
    private javax.swing.JRadioButton rbn_dni;
    private javax.swing.JRadioButton rbn_pasaporte;
    private javax.swing.JTextField txtApellido;
    private javax.swing.JTextField txtDni;
    private javax.swing.JTextField txtEdad;
    private javax.swing.JTextField txtNombre;
    private javax.swing.JTextPane txtpanel_empleado;
    // End of variables declaration//GEN-END:variables
}
